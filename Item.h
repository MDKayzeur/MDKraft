#pragma once

class Item
{
	public :
		int ItemId;

		Item() : ItemId(-1) {};

		explicit Item(int i) : ItemId(i) {};
};