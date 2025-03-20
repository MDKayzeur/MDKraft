#pragma once
#include <vector>
#include "Item.h"

class Inventory{

	public :
		int InventorySizeX;
		int InventorySizeY;
		std::vector<std::vector<Item*>> InventoryStorage;

		Inventory(int x, int y) :InventorySizeX(x), InventorySizeY(y) {};

		Inventory* InitInventory(int invX, int invY);

		void ShowInventory(Inventory* inv) const;

};