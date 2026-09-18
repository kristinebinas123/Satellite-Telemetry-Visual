using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class OrbitPath : MonoBehaviour
{
    public float orbitRadius = 5f; 
    public int points = 200; 
    
    private LineRenderer line; 
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        line = GetComponent<LineRenderer>(); 
        
        line.positionCount = points; 
        line.useWorldSpace = true; 

         for (int i = 0; i < points; i++)
        {
            float angle = i * 2f * Mathf.PI / points;

            float x = Mathf.Cos(angle) * orbitRadius;
            float z = Mathf.Sin(angle) * orbitRadius;

            line.SetPosition(i, new Vector3(x, 0f, z));
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
