//https://blog.csdn.net/qq_32320399/article/details/81518476
static const auto io_sync_off=[](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();