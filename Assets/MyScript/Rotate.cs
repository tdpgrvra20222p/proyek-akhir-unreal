using UnityEngine;

public class NumberToRotation : MonoBehaviour
{
    public float endValue;  // End value
    public float startValue;  // Start value
    public float inputX;  // Input x value
    public Transform targetTransform;  // Transform to rotate

    private bool hasUpdated = false;

    private void OnValidate()
    {
        if (hasUpdated)
        {
            float inputH = endValue - startValue;  // Calculate the difference between the end and start values
            float angle = Mathf.Atan2(inputH, inputX) * Mathf.Rad2Deg;  // Calculate the rotation angle using arctan

            angle = Mathf.Repeat(angle, 360f);  // Wrap the angle within 0 to 360 degrees

            Vector3 rotation = targetTransform.rotation.eulerAngles;
            rotation.x = angle;
            targetTransform.rotation = Quaternion.Euler(rotation);
        }
        else
        {
            hasUpdated = true;
        }
    }
}