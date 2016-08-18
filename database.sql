DROP DATABASE cpp;
CREATE DATABASE cpp;
USE cpp;

--Create table for insert user details
CREATE TABLE user (
	id int(10) AUTO_INCREMENT PRIMARY KEY,
	username VARCHAR(25) NOT NULL,
	password VARCHAR(25) NOT NULL,
	firstname VARCHAR(25)
	);
-- insert some data
INSERT INTO user(username,password,firstname) VALUES('emalsha','123','Emalsha');
INSERT INTO user(username,password,firstname) VALUES('hasi','123','Hiran');
INSERT INTO user(username,password,firstname) VALUES('ravi','123','Ravindu');

--///////////////////////////////////////////////////////////////////////////////////////

-- crreate table for item details
CREATE TABLE item (
	itemCode int(10) AUTO_INCREMENT PRIMARY KEY,
	itemname VARCHAR(25),
	itemflavour VARCHAR(25),
	itemcolor VARCHAR(25),
	itemprice int(10)
);

-- insert somw data
INSERT INTO item(itemname,itemflavour,itemcolor,itemprice) VALUES('Choco Mill','Chocolate and Milk','Light Brown','250');
INSERT INTO item(itemname,itemflavour,itemcolor,itemprice) VALUES('Cheese Choc','Chocolate and Chees','Yello','300');
INSERT INTO item(itemname,itemflavour,itemcolor,itemprice) VALUES('Vanila Mill','Vanilla','White','200');
