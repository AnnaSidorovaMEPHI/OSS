echo "Домашний каталог пользователя"
whoami
echo "содержит обычных файлов:"
find ~ -maxdepth 1  -type f | wc -c
echo "скрытых файлов:"
ls -a ~ | wc -c
