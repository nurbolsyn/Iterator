#include "dinermenu.h"
#include "pancakehousemenu.h"
#include "waitress.h"

int main()
{
    DinerMenu* dinerMenu = new DinerMenu();
    PancakeHouseMenu* pancakeHouseMenu = new PancakeHouseMenu();

    Waitress* waitress = new Waitress(pancakeHouseMenu, dinerMenu);
    waitress->printMenu();
}