#include "gtest/gtest.h"
#include "../factory.h"
#include "../player.h"
#include "../game.h"
#include "../instructor.h"

/** Tests for class Player  **/

TEST(playerTest, setPIdTest) {

}

TEST(playerTest, getPIdTest) {

}

TEST(playerTest, setRoleTest) {

}

TEST(playerTest, getRoleTest) {

}

TEST(playerTest, getInventoryTest){

}

TEST(playerTest, setInventoryTest){

}

TEST(playerTest, getBackorderTest){

}

TEST(playerTest, setBackorderTest){

}

TEST(playerTest, setIncomingOrderTest){

}

TEST(playerTest, getIncomingOrderTest){

}

TEST(playerTest, setIncomingShipmentTest){

}

TEST(playerTest, getIncomingShipmentTest){

}

TEST(playerTest, setOutgoingShipmentTest){

}

TEST(playerTest, getOutgoingShipmentTest){

}

TEST(playerTest, getCostTest){

}

TEST(playerTest, setCostTest){

}

TEST(playerTest, getTotalCostTest){

}

TEST(playerTest, setTotalCostTest){

}

TEST(playerTest, getOrderReceivedTest){

}

TEST(playerTest, setOrderReceivedTest){

}

TEST(playerTest, getShipmentReceivedTest){

}

TEST(playerTest, setShipmentReceivedTest){

}

TEST(playerTest, setOrderPlacedTest) {

}

TEST(playerTest, getOrderPlacedTest) {

}

TEST(playerTest, setShipmentPlacedTest) {

}

TEST(playerTest, getShipmentPlacedTest) {

}

TEST(playerTest, setDemandTest) {

}

TEST(playerTest, getDemandTest) {

}

TEST(playerTest, getGameTest) {

}

TEST(playerTest, setGameTest) {

}

//placeOrder should call Game's addOrder method
TEST(playerTest, placeOrderTest ) {

}

//placeOrder should call Game's addShipment method
TEST(playerTest, placeShipmentTest) {

}

//getAvailableShipment returns the number of beers that are available for shipment to the next Player
TEST(playerTest, getAvailableShipmentTest) {

}

TEST(playerTest, receiveShipmentTest){

}

TEST(playerTest, receiveOrderTest){

}

TEST(playerTest, decreaseInventoryTest ) {

}

TEST(playerTest, increaseInventoryTest) {

}


/** Tests for class Game **/

TEST(gameTest, setGIdTest){

}

TEST(gameTest, getGIdTest){

}

TEST(gameTest, setInstrIdTest){

}

TEST(gameTest, getInstrIdTest){

}

TEST(gameTest, setPFactIdTest){

}

TEST(gameTest, getPFactIdTest){

}

TEST(gameTest, getPDistributorIdTest){

}

TEST(gameTest, setPDistributorIdTest){

}

TEST(gameTest, getPWholesalerIdTest){

}

TEST(gameTest, setPWholesalerIdTest){

}

TEST(gameTest, setPRetailerIdTest){

}

TEST(gameTest, getPRetailerIdTest){

}

TEST(gameTest, setOrdersToBeExecutedTest) {

}

TEST(gameTest, getOrdersToBeExecutedTest) {

}

TEST(gameTest, setShipmentsToBeExecutedTest) {

}

TEST(gameTest, getShipmentsToBeExecutedTest) {

}

TEST(gameTest, setPlayersTest) {

}

TEST(gameTest, getPlayersTest) {

}

TEST(gameTest, setConsumerDemandPerWeekTest) {

}

TEST(gameTest, getConsumerDemandPerWeekTest) {

}

TEST(gameTest, setOrderDelayTest) {

}

TEST(gameTest, getOrderDelayTest) {

}

TEST(gameTest, setShipmentDelayTest) {

}

TEST(gameTest, getShipmentDelayTest) {

}

TEST(gameTest, setHoldingCostTest){

}

TEST(gameTest, getHoldingCostTest){

}

TEST(gameTest, setBackorderCostTest){

}

TEST(gameTest, getBackorderCostTest){

}

TEST(gameTest, setStartingInventoryTest){

}

TEST(gameTest, getStartingInventoryTest){

}

TEST(gameTest, setWeeksToBePlayedTest){

}

TEST(gameTest, getWeeksToBePlayedTest) {

}

TEST(gameTest, getCurrentWeekTest) {

}

TEST(gameTest, setCurrentWeekTest) {

}

TEST(gameTest, setInfoCodeTest){

}

TEST(gameTest, getInfoCodeTest) {

}

TEST(gameTest, setFactoryDelayTest){

}

TEST(gameTest, getFactoryDelayTest) {

}

TEST(gameTest, setNumberOfPlayersTest){

}

TEST(gameTest, getNumberOfPlayersTest) {

}

TEST(gameTest, startGameTest){

}

//In executeOrdersForCurrentWeek, the Order objects in the map ordersToBeExecuted are executed (the method
// executeOrder for each object is called)
TEST(gameTest, executeOrdersForCurrentWeekTest){

}

//In executeShipmentsForCurrentWeek, the Shipment objects in the map setShipmentsToBeExecuted are executed (the method
// executeShipment for each object is called)
TEST(gameTest, executeShipmentsForCurrentWeekTest){

}

TEST(gameTest, updatePlayerInventoriesTest){

}

TEST(gameTest, getConsumerOrderForWeekTest){

}

TEST(gameTest, advanceWeekTest){

}

// In addOrder, an object of class Order is created and put into the map setOrdersToBeExecuted
TEST(gameTest, addOrderTest){

}

// In addShipment, an object of class Shipment is created and put into the map setShipmentsToBeExecuted
TEST(gameTest, addShipmentTest){

}

TEST(gameTest, addPlayerTest){

}

TEST(gameTest, getDownstreamTest){

}

TEST(gameTest, getUpstreamTest){

}

Test(gameTest, generatePasswordsTest){

}


/** Tests for class Instructor **/

TEST(instructorTest, setInstrIdTest){

}

TEST(instructorTest, getInstrIdTest){

}

TEST(instructorTest, setInstrEmailTest){

}

TEST(instructorTest, getInstrEmailTest){

}

TEST(instructorTest, setInstrPasswordTest){

}

TEST(instructorTest, getInstrPasswordTest){

}

TEST(instructorTest, setGamesTest){

}

TEST(instructorTest, getGamesTest){

}

TEST(instructorTest, showGamesStatusTest){

}

TEST(instructorTest, createGameTest){

}

TEST(instructorTest, createGamesTest){

}


/** Tests for class PlayerEvent **/

TEST(playerEventTest, getEventIdTest){

}

TEST(playerEventTest, setEventIdTest){

}

TEST(playerEventTest, getGIdTest){

}

TEST(playerEventTest, setGIdTest){

}

TEST(playerEventTest, setNumberOfBeersTest){

}

TEST(playerEventTest, getNumberOfBeersTest){

}

TEST(playerEventTest, getOrderedInWeekTest){

}

TEST(playerEventTest, setOrderedInWeekTest){

}

TEST(playerEventTest, getShippedInWeekTest){

}

TEST(playerEventTest, setShippedInWeekTest){

}

TEST(playerEventTest, getReceiverTest){

}

TEST(playerEventTest, setReceiverTest){

}

TEST(playerEventTest, getToPlayerIdTest){

}

TEST(playerEventTest, setToPlayerIdTest){

}

TEST(playerEventTest, getFromPlayerIdTest){

}

TEST(playerEventTest, setFromPlayerIdTest){

}


/** Tests for class Shipment **/

TEST(shipmentTest, executeShipmentTest){

}


/** Tests for class Order **/

TEST(orderTest, executeOrderTest){

}
