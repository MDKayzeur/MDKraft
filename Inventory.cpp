#include "Inventory.h"
#include <iostream>

Inventory* Inventory::InitInventory(int invX, int invY){
	auto inv = new Inventory(invX, invY);

	inv->InventoryStorage = std::vector< std::vector<Item*>>(inv->InventorySizeX, std::vector<Item*>(inv->InventorySizeY));

	ShowInventory(inv);

	std::cout << inv->InventoryStorage.capacity() * inv->InventoryStorage[0].capacity() << std::endl;

	return inv;
}

void Inventory::ShowInventory(Inventory* inv) const{
	for (int i = 0; i < inv->InventorySizeX; i++) {
		std::cout << "{ ";
		for (int j = 0; j < inv->InventorySizeY; j++) {

			inv->InventoryStorage[i][j] = { new Item() };
			std::cout << inv->InventoryStorage[i][j]->ItemId;
			if (j != InventorySizeY - 1) std::cout << " , ";
		}
		std::cout << " }" << std::endl;
	}
}

