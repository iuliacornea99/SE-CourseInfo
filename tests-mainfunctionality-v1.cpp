#include "gtest/gtest.h"
#include "../factory.h"
#include "../player.h"
#include "../game.h"
#include "../instructor.h"

// Tests for class Player
TEST(playerTest, decreaseInventoryTest ) {

    Player p;
    int curr_inv = p.getInventory();
    EXPECT_EQ(curr_inv-3, p.decreaseInventory(3));

}

TEST(playerTest, increaseInventoryTest) {

    Player p;
    int curr_inv = p.getInventory();
    EXPECT_EQ((curr_inv+3, p.increaseInventory(3));
    EXPECT_EQ((curr_inv+1000000, p.increaseInventory(1000000)));
}

TEST(playerTest, getBackorderTest){

    Player p;
    p.setBackorder(10);
    EXPECT_EQ(10, p.getBackorder());
}

TEST(playerTest, getCostTest){

    Player p;
    p.setCost(2.5);
    EXPECT_EQ(2.5, p.getCost());
}

TEST(playerTest, getInventoryTest){

    Player p;
    p.setInventory(10000);
    EXPECT_EQ(10000, p.getInventory);
}

TEST(playerTest, setBackorderTest){

    Player p;
    p.setBackorder(20);
    EXPECT_EQ(20, p.getBackorder());
}

TEST(playerTest, setCostTest){

    Player p;
    p.setCost(30);
    EXPECT_EQ(30, p.getCostTest());
}

TEST(playerTest, setInventoryTest){

    Player p;
    p.setInventory(40);
    EXPECT_EQ(40, p.getInventory());
}

TEST(playerTest, setOrderTest) {

    Player p;
    p.setOrder(3);
    EXPECT_EQ(3, p.getOrder());
    p.setOrder(3.5);
    EXPECT_EQ(3, p.getOrder());
}

TEST(playerTest, getOrderTest) {

    Player p;
    p.setOrder(5);
    EXPECT_EQ(5, p.getOrder());
}

TEST(playerTest, setDemandTest) {

    Player p;
    p.setDemand(3);
    EXPECT_EQ(3, p.getDemand());
}


TEST(playerTest, getDemand) {

    Player p;
    p.setDemand(4);
    EXPECT_EQ(4, p.getDemand());
}

//tests for class Game
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

TEST(gameTest, setInfoCodeTest){
    
    Game g;
    g.setInfoCode(3);
    EXPECT_EQ(3, g.getInfoCode());
}

TEST(gameTest, setStartingInventoryTest){

    Game g;
    g.setStartingInventory(4);
    EXPECT_EQ(4, g.getStartingInventory());
}

TEST(gameTest, setBackorderTest){

    Game g;
    g.setBackorder(5);
    EXPECT_EQ(5, g.getBackorder());
}

TEST(gameTest, setHoldingCostTest){

    Game g;
    g.setHoldingCost(6);
    EXPECT_EQ(3, g.getHoldingCost());
}

TEST(gameTest, addOrderTest){

    Game g;
    Vector<int> ordToExec = g.getOrdersToBeExecuted();
    ordToExec.push_back(5);
    g.addOrder(5);
    EXPECT_EQ(ordToExec, g.getOrdersToBeExecuted());
}

TEST(gameTest, getWeeksToBePlayedTest) {

    Game g;
    g.setweeksToBePlayed(2);
    EXPECT_EQ(2, g.getWeeksToBePlayed());
}

TEST(gameTest, getInfoCodeTest) {

    Game g;
    g.setInfoCode(3);
    EXPECT_EQ(3, g.getInfoCode());
}

TEST(gameTest, getStartingInventoryTest{

    Game g;
    g.setStartingInventory(14);
    EXPECT_EQ(14, g.getStartingInventory());
}

TEST(gameTest, getBackorderCostTest){

    Game g;
    g.setBackorderCost(5.7);
    EXPECT_EQ(5.7, g.getBackorderCost());
}

TEST(gameTest, getHoldingCostTest) {

    Game g;
    g.setHoldingCost(3.5);
    EXPECT_EQ(3.5, g.getHoldingCost());
}

TEST(gameTest, getOrdersToBeExecutedTest){

    Game g;
    Vector<int> ordToExec = g.getOrdersToBeExecuted();
    ordToExec.push_back(6);
    g.addOrder(6);
    EXPECT_EQ(ordToExec, g.getOrdersToBeExecuted());
}

TEST(gameTest, getCurrentWeekTest) {

    Game g;
    g.setCurrentWeek(1);
    EXPECT_EQ(1, g.getCurrentWeek());
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
  EXPECT_EQ( email, i.getInstrEmail());
}

TEST(instructorTest, setInstrPasswordTest){
    Instructor i;
    i.setInstrPasswordTest("superstrongpassword");
    EXPECT_EQ("superstrongpassword", i.getInstrEmail());
}

TEST(instructorTest, getInstrEmailTest){
  Instructor i;
  i.setInstrPasswordTest("weakpassword");
  EXPECT_EQ("weakpassword", i.getInstrEmail());
}

TEST(instructorTest, setInstrIdTest){
  Instructor i;
  i.setInstrID(2020);
  EXPECT_EQ(2020, i.getInstrID());
}

TEST(instructorTest, getInstrIdTest){
  Instructor i;
  i.setInstrID(30);
  EXPECT_EQ(30, i.getInstrID());
}