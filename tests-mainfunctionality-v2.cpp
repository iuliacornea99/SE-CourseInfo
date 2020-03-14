#include "gtest/gtest.h"
#include "../factory.h"
#include "../player.h"
#include "../game.h"
#include "../instructor.h"

// Tests for class Player

TEST(playerTest, setPIdTest) {

    Player p;
    p.setPId(2);
    EXPECT_EQ(2, p.getPId());
}

TEST(playerTest, getPIdTest) {

    Player p;
    p.setPId(25);
    EXPECT_EQ(25, p.getPId());
}

TEST(playerTest, setRoleTest) {

    Player p;
    p.setRole(1);
    EXPECT_EQ(1, p.getRole());
}

TEST(playerTest, getRoleTest) {

    Player p;
    p.setRole(2);
    EXPECT_EQ(2, p.getRole());
}

TEST(playerTest, decreaseInventoryTest ) {

    Player p;
    int curr_inv = p.getInventory();
    EXPECT_EQ(curr_inv-3, p.decreaseInventory(3));
}

TEST(playerTest, increaseInventoryTest) {

    Player p;
    int curr_inv = p.getInventory();
    EXPECT_EQ((curr_inv+3, p.increaseInventory(3));
}

TEST(playerTest, getBackorderTest){

    Player p;
    p.setBackorder(10);
    EXPECT_EQ(10, p.getBackorder());
}

TEST(playerTest, getCostTest){

    Player p;
    p.setCost(2);
    EXPECT_EQ(2, p.getCost());
}

TEST(playerTest, getInventoryTest){

    Player p;
    p.setInventory(10000);
    EXPECT_EQ(10000, p.getInventory());
}

TEST(playerTest, setBackorderTest){

    Player p;
    p.setBackorder(20);
    EXPECT_EQ(20, p.getBackorder());
}

TEST(playerTest, setCostTest){

    Player p;
    p.setCost(30);
    EXPECT_EQ(30, p.getCost());
}

TEST(playerTest, setInventoryTest){

    Player p;
    p.setInventory(40);
    EXPECT_EQ(40, p.getInventory());
}

TEST(playerTest, setOrderPlacedTest) {

    Player p;
    p.setOrderPlaced(3);
    EXPECT_EQ(3, p.getOrderPlaced());
    p.setOrderPlaced(5);
    EXPECT_EQ(5, p.getOrderPlaced());
}

TEST(playerTest, getOrderPlacedTest) {

    Player p;
    p.setOrderPlaced(10);
    EXPECT_EQ(10, p.getOrderPlaced());
}

TEST(playerTest, setDemandTest) {

    Player p;
    p.setDemand(3);
    EXPECT_EQ(3, p.getDemand());
}


TEST(playerTest, getDemandTest) {

    Player p;
    p.setDemand(4);
    EXPECT_EQ(4, p.getDemand());
}

//tests for class Game

TEST(gameTest, setShipmentDelayTest) {

    Game g;
    g.setShipmentDelay(3);
    EXPECT_EQ(3, g.getShipmentDelay());
}

TEST(gameTest, getShipmentDelayTest) {

    Game g;
    g.setShipmentDelay(8);
    EXPECT_EQ(8, g.getShipmentDelay());
}

TEST(gameTest, setOrderDelayTest) {

    Game g;
    g.setOrderDelay(3);
    EXPECT_EQ(3, g.getOrderDelay());
}

TEST(gameTest, getOrderDelayTest) {

    Game g;
    g.setOrderDelay(10);
    EXPECT_EQ(10, g.getOrderDelay());
}


TEST(gameTest, setGIdTest){

    Game g;
    g.setGId(34);
    EXPECT_EQ(34, g.getGId());
}

TEST(gameTest, getGIdTest){

    Game g;
    g.setGId(6);
    EXPECT_EQ(6, g.getGId());
}

TEST(gameTest, setInstrIdTest){

    Game g;
    g.setInstrId(20);
    EXPECT_EQ(20, g.getInstrId());
}

TEST(gameTest, getInstrIdTest){

    Game g;
    g.setInstrId(2);
    EXPECT_EQ(2, g.getInstrId());
}

TEST(gameTest, setPFactIdTest){

    Game g;
    g.setPFactId(100);
    EXPECT_EQ(100, g.getPFactId());
}

TEST(gameTest, getPFactIdTest){

    Game g;
    g.setPFactId(1030);
    EXPECT_EQ(1030, g.getPFactId());
}

TEST(gameTest, getPDistributorIdTest){

    Game g;
    g.setPDistributorId(56);
    EXPECT_EQ(56, g.getPDistributorId());
}

TEST(gameTest, setPDistributorIdTest){

    Game g;
    g.setPDistributorId(45);
    EXPECT_EQ(45, g.getPDistributorId());
}

TEST(gameTest, getPWholesalerIdTest){

    Game g;
    g.setPWholesalerId(56);
    EXPECT_EQ(56, g.getPWholesalerId());
}

TEST(gameTest, setPWholesalerIdTest){

    Game g;
    g.setPWholesalerId(12);
    EXPECT_EQ(12, g.getPWholesalerId());
}

TEST(gameTest, setPRetailerIdTest){

    Game g;
    g.setRetailerId(24);
    EXPECT_EQ(24, g.getRetailerId(24));
}

TEST(gameTest, getPRetailerIdTest){

    Game g;
    g.setRetailerId(24);
    EXPECT_EQ(24, g.getRetailerId(24));
}

TEST(gamTest, getOrderTimeDelayTest){

    Game g;
    g.setOrderTimeDelay(3);
    EXPECT_EQ(3, g.getORderTimeDelay());
}

TEST(gamTest, setOrderTimeDelayTest){

    Game g;
    g.setOrderTimeDelay(4);
    EXPECT_EQ(4, g.getOrderTimeDelay());
}

TEST(gameTest, advanceWeekTest){

    Game g;
    int currweek = g.getCurrentWeek();
    EXPECT_EQ(currweek+1, g.advanceWeek());
}

TEST(gameTest, setWeeksToBePlayedTest){

    Game g;
    g.setweeksToBePlayed(2);
    EXPECT_EQ(2, getweeksToBePlayed());
}

TEST(gameTest, getWeeksToBePlayedTest) {

    Game g;
    EXPECT_EQ(26, g.getWeeksToBePlayed()); //checking default value
    g.setweeksToBePlayed(2);
    EXPECT_EQ(2, g.getWeeksToBePlayed());
}

TEST(gameTest, setInfoCodeTest){

    Game g;
    g.setInfoCode(3);
    EXPECT_EQ(3, g.getInfoCode());
}

TEST(gameTest, getInfoCodeTest) {

    Game g;
    g.setInfoCode(3);
    EXPECT_EQ(3, g.getInfoCode());
}

TEST(gameTest, setHoldingCostTest){

    Game g;
    g.setHoldingCost(6.3);
    EXPECT_EQ(6.3, g.getHoldingCost());
}

TEST(gameTest, getHoldingCostTest){

    Game g;
    EXPECT_EQ(0.5, g.getHoldingCost()); //checking default value
    g.setHoldingCost(9);
    EXPECT_EQ(9, g.getHoldingCost());
}

TEST(gameTest, setStartingInventoryTest){

    Game g;
    g.setStartingInventory(4);
    EXPECT_EQ(4, g.getStartingInventory());
}

TEST(gameTest, getStartingInventoryTest){

    Game g;
    EXPECT_EQ(12, g.getStartingInventory()); //checking default value
    g.setStartingInventory(14);
    EXPECT_EQ(14, g.getStartingInventory());
}

TEST(gameTest, getBackorderCostTest){

    Game g;
    g.setBackorderCost(5.7);
    EXPECT_EQ(5.7, g.getBackorderCost());
}

TEST(gameTest, getCurrentWeekTest) {

    Game g;
    EXPECT_EQ(0, g.getCurrentWeek()); //checking default value
    g.setCurrentWeek(5);
    EXPECT_EQ(5, g.getCurrentWeek());
}

TEST(gameTest, setCurrentWeekTest) {

    Game g;
    g.setCurrentWeek(1);
    EXPECT_EQ(1, g.getCurrentWeek());
}

// Instructor Class Test Cases

TEST(instructorTest, setInstrEmailTest){

    Instructor i;
    i.setInstrEmail("hi.there@jacobs-university.de");
    EXPECT_EQ("hi.there@jacobs-university.de", i.getInstrEmail());
}

TEST(instructorTest, getInstrEmailTest){

  Instructor i;
  i.setInstrEmail("hi.again@jacobs-university.de");
  string email = "hi.again@jacobs-university.de";
  EXPECT_EQ( email, i.getInstrEmail());
}

TEST(instructorTest, setInstrPasswordTest){

    Instructor i;
    i.setInstrPassword("superstrongpassword");
    EXPECT_EQ("superstrongpassword", i.getInstrPassword());
}

TEST(instructorTest, getInstrPasswordTest){

  Instructor i;
  i.setInstrPassword("weakpassword");
  EXPECT_EQ("weakpassword", i.getInstrPassword());
}

TEST(instructorTest, setInstrIdTest){

  Instructor i;
  i.setInstrId(2020);
  EXPECT_EQ(2020, i.getInstrId());
}

TEST(instructorTest, getInstrIdTest){

  Instructor i;
  i.setInstrId(30);
  EXPECT_EQ(30, i.getInstrId());
}

// Order Class Test Cases

TEST(orderTest, getOrderIdTest){

    Order o;
    o.setOrderId(23);
    EXPECT_EQ(23, o.getOrderId());
}

TEST(orderTest, setOrderIdTest){

    Order o;
    o.setOrderId(32);
    EXPECT_EQ(32, o.getOrderId());
}

TEST(orderTest, getGIdTest){

    Order o;
    o.setGId(53);
    EXPECT_EQ(53, o.getGId());
}

TEST(orderTest, setGIdTest){

    Order o;
    o.setGId(13);
    EXPECT_EQ(13, o.getGId());
}

TEST(orderTest, getFromPlayerIdTest){

    Order o;
    o.setFromPlayerId(4775);
    EXPECT_EQ(4775, o.getFromPlayerId());
}

TEST(orderTest, setFromPlayerIdTest){

    Order o;
    o.setFromPlayerId(5323);
    EXPECT_EQ(5323, o.getFromPlayerId());
}

TEST(orderTest, getToPlayerIdTest){

    Order o;
    o.setToPlayerId(424);
    EXPECT_EQ(424, o.getToPlayerId());
}

TEST(orderTest, setToPlayerIdTest){

    Order o;
    o.setToPlayerId(42);
    EXPECT_EQ(42, o.getToPlayerId());
}

TEST(orderTest, getOrderedInWeekTest){

    Order o;
    o.setOrderedInWeek(5);
    EXPECT_EQ(5, o.getOrderedInWeek());
}

TEST(orderTest, setOrderedInWeekTest){

    Order o;
    o.setOrderedInWeek(2);
    EXPECT_EQ(2, o.getOrderedInWeek());
}

TEST(orderTest, getShippedInWeekTest){

    Order o;
    o.setShippedInWeek(4);
    EXPECT_EQ(4, o.getShippedInWeek());
}

TEST(orderTest, setShippedInWeekTest){

    Order o;
    o.setShippedInWeek(3);
    EXPECT_EQ(3, o.getShippedInWeek());
}

TEST(orderTest, setNumberOfBeersTest){

    Order o;
    o.setNumberOfBeers(20);
    EXPECT_EQ(20, o.getNumberOfBeers());
}
