using UnityEngine;
using UnityEngine.UIElements;

public class RotateCamera : MonoBehaviour
{
    public float rotationSpeed; 
    public GameObject Satellite; 
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.RotateAround(Satellite.transform.position, new Vector3(0, 1,0), rotationSpeed * Time.deltaTime);
    }
}
