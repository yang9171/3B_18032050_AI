using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Du3Project
{
	public class UIItemElement : MonoBehaviour
	{

        [Header("[자료들]")]
        public Text ItemLabel = null;
        public Text ItemScore = null;
        public Image ItemIcon = null;

        [Header("[데이터용Index]")]
        public int ItemIndex = -1;


        public void UpdateItem(int p_index) //업데이트
        {
            ItemIndex = p_index;

            ItemScore.text = ItemIndex.ToString();
        }

        public void UpdateItemInfo(ItemInfo _iteminfo)
        {
            ItemLabel.text = _iteminfo.itemName;
            ItemScore.text = "LV."+_iteminfo.itemLevel.ToString();
            ItemIcon.GetComponent<Image>().sprite = _iteminfo.itemImage;
        }

        void Start()
		{
			
		}

		//void Update()
		//{
			
		//}
	}
}