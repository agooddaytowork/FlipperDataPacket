<?php 
require_once 'users/init.php';

if (!securePage($_SERVER['PHP_SELF'])){die();}

$data_decoded  = json_decode(file_get_contents("php://input"), true);

$TemperatureTableName = '';
$TemperatureTableName .= $data_decoded["Location"];
$TemperatureTableName .= "FlipperCH1";


echo($data_decoded["Location"]);
echo($data_decoded["FlipperCH1"]);
echo($TemperatureTableName);
insertTemperatureToDatabase($TemperatureTableName, $data_decoded["FlipperCH1"]);

?>