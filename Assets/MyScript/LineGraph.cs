using UnityEngine;

public class LineGraph : MonoBehaviour
{
    public float[] yValues = new float[12]; // Array to store the y-values for the graph
    public float lineWidth = 0.1f;
    public float graphHeight = 5f;
    public Color lineColor = Color.blue;

    private Mesh lineMesh;
    private MeshRenderer lineRenderer;

    private void OnValidate()
    {
        yValues = ResizeArray(yValues, 12); // Ensure that the array size is always 12
    }

    // Helper method to resize the yValues array
    private T[] ResizeArray<T>(T[] originalArray, int size)
    {
        T[] newArray = new T[size];
        for (int i = 0; i < Mathf.Min(originalArray.Length, size); i++)
        {
            newArray[i] = originalArray[i];
        }
        return newArray;
    }

    private void Start()
    {
        CreateLineMesh();
    }

    private void OnDrawGizmos()
    {
        if (yValues.Length < 2)
            return;

        Vector3[] points = new Vector3[yValues.Length];
        for (int i = 0; i < yValues.Length; i++)
        {
            float x = i;
            float y = Mathf.Clamp(yValues[i], -10, 10) * graphHeight;
            points[i] = new Vector3(x, y, 0f);
        }

        DrawGizmoLine(points);
    }

    private void CreateLineMesh()
    {
        lineRenderer = gameObject.AddComponent<MeshRenderer>();
        lineRenderer.sharedMaterial = new Material(Shader.Find("Custom/LineGraphShader"));

        lineMesh = new Mesh();
        lineRenderer.sharedMesh = lineMesh;

        Vector3[] vertices = new Vector3[yValues.Length * 2];
        int[] triangles = new int[(yValues.Length - 1) * 6];

        Vector3 forward = Vector3.forward * lineWidth;
        Vector3 right = Vector3.Cross(Vector3.up, forward).normalized;

        for (int i = 0; i < yValues.Length; i++)
        {
            Vector3 point = new Vector3(i, Mathf.Clamp(yValues[i], -10, 10) * graphHeight, 0f);
            Vector3 offset = right * lineWidth / 2f;

            vertices[i * 2] = point + offset;
            vertices[i * 2 + 1] = point - offset;

            if (i > 0)
            {
                int prevIndex = (i - 1) * 2;
                int currIndex = i * 2;

                triangles[(i - 1) * 6] = prevIndex;
                triangles[(i - 1) * 6 + 1] = currIndex;
                triangles[(i - 1) * 6 + 2] = currIndex + 1;

                triangles[(i - 1) * 6 + 3] = prevIndex;
                triangles[(i - 1) * 6 + 4] = currIndex + 1;
                triangles[(i - 1) * 6 + 5] = prevIndex + 1;
            }
        }

        lineMesh.vertices = vertices;
        lineMesh.triangles = triangles;
    }

    private void DrawGizmoLine(Vector3[] points)
    {
        Gizmos.color = lineColor;

        for (int i = 1; i < points.Length; i++)
        {
            Gizmos.DrawLine(points[i - 1], points[i]);
        }
    }
}
