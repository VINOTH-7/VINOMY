<?php
       $value1 = $_POST['value1'];
       $value2 = $_POST['value2'];
?>
<html>
       <title>PHP - Add two numbers</title>
       <body>
              <form action="addtwonumbers.php" method="post">
                     <input type="text" name="value1" value="0" />
                     <input type="text" name="value2" value="0" />
                     <input type="submit" value="Calculate values"/>
              </form>
              Answer : <?php echo ($value1 + $value2); ?>
       </body>
</html>
