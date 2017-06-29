# jose
Mi conciencia

ayudamemorias:
 - mysql
  - list all databases                          SHOW DATABASES;
  - backup specific db                          mysqldump database_name > database_name.sql
                                                // se puede poner -p para indicar contraseña
 - instalación de wp
    - entrar a mysql                            mysql -u root -p
    - crear la bd                               CREATE DATABASE wordpress;
    - crear usuario                             CREATE USER wordpressuser@localhost IDENTIFIED BY 'password';
    - dar permisos                              GRANT ALL PRIVILEGES ON wordpress.* TO wordpressuser@localhost;
    - refrescar permisos en mysql               FLUSH PRIVILEGES;
    - salir                                     exit
    - entrar al server y bajar wp               wget http://wordpress.org/latest.tar.gz
    - extraer los archivos                      tar xzvf latest.tar.gz
    - entrar al directorio de wp y copiar la configuracion de ejemplo:
                                                cp wp-config-sample.php wp-config.php

learning tree
 - react
  - lee [react up'n running]
 - game devel
  - lee [Procedural Content Generation for C++ Game Development [PacktPub] [2016]]
  - unreal
  - unity
  - gamemaker

