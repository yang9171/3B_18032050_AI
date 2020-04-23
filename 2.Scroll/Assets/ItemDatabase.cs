using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemDatabase : MonoBehaviour
{
   
    //public List<ItemInfo> iteminfos = new List<ItemInfo>();
    public ItemInfo[] iteminfos = new ItemInfo[40];

    public ItemInfo GetItemInfo(int _num)
    {
        return iteminfos[_num];
    }

    void Start()
    {
        
    }

   



    
}
