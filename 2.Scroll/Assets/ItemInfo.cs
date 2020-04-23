using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class ItemInfo
{
    public string itemName;
    public int itemLevel;
    public Sprite itemImage;

    public ItemInfo(string _itemname, int _itemlevel, Sprite _itemimage)
    {
        itemName = _itemname;
        itemLevel = _itemlevel;
        itemImage = _itemimage;
    }
    public ItemInfo()
    {
        itemName = "Nodata";
        itemLevel = -1;
        itemImage = null;
    }
}
