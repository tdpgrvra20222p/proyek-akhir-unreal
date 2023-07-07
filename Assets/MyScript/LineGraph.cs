using UnityEngine;

[ExecuteInEditMode]
public class LineGraph : MonoBehaviour
{
    public LineRenderer lineRenderer;
    public Vector3[] inputValues; // Array to store input values

    private void Update()
    {
        if (lineRenderer != null)
        {
            lineRenderer.positionCount = inputValues.Length;
            lineRenderer.SetPositions(inputValues);
        }
    }
}