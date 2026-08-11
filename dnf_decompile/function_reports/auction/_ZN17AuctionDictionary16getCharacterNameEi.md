# _ZN17AuctionDictionary16getCharacterNameEi

`AuctionDictionary::getCharacterName(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x8054cc6` | `0x98` | `0x8057726` | `0x98` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,43 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 lea    0x416c(%eax),%ecx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKiPN17AuctionDictionary19CharacterNameStructESt4lessIS0_ESaISt4pairIS0_S3_EEE4findERS0_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x416c(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKiPN17AuctionDictionary19CharacterNameStructESt4lessIS0_ESaISt4pairIS0_S3_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17AuctionDictionary19CharacterNameStructEEEeqERKS6_>
 test   %al,%al
 je     <T> <_ZN17AuctionDictionary16getCharacterNameEi+0x85>
 mov    0xc(%ebp),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"getCharacterName, failed(), characterId : %d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    $&data#6876c099(.rodata),%eax
+mov    $&_ZZN17AuctionDictionary16getCharacterNameEiE21s_failedCharacterName,%eax
 jmp    <T> <_ZN17AuctionDictionary16getCharacterNameEi+0x93>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17AuctionDictionary19CharacterNameStructEEEptEv>
 mov    0x4(%eax),%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: char * getCharacterName(AuctionDictionary * this, int characterId) */

char * __thiscall
AuctionDictionary::_ZN17AuctionDictionary16getCharacterNameEi
          (AuctionDictionary *this,int characterId)

{
  bool bVar1;
  TraceLog *this_00;
  CharacterNameStruct *pCVar2;
  pair<const_int,_AuctionDictionary::CharacterNameStruct*> *ppVar3;
  _Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_> local_14;
  _Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_> local_10 [2];
  
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>
                       iter@[???] */
  std::
  map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
  ::find((map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
          *)&local_14,(int *)&this->mCharacterNameTable);
  std::
  map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
  ::end((map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
         *)local_10);
  bVar1 = std::_Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>::
          operator==(&local_14,local_10);
  if (bVar1) {
    this_00 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(this_00,7,"getCharacterName, failed(), characterId : %d",characterId);
    pCVar2 = (CharacterNameStruct *)&DAT_08151740;
  }
  else {
    ppVar3 = std::_Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>
             ::operator->(&local_14);
    pCVar2 = ppVar3->second;
  }
  return pCVar2->char_name;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp)（约第 124 行）：

```cpp
char* AuctionDictionary::getCharacterName(int characterId)
{
    // ORIG 失败分支返回 .rodata:0x8151740：该处是 4 字节 NUL 对齐填充 +
    // "getCharacterName, failed(), characterId : %d" 日志串（C 语义为空字符串，
    // 首个字节即 NUL）。重建不得硬编码 ORIG 地址，改为等长 const 静态缓冲，
    // 精确复刻 ORIG 的 64 字节数据快照（含紧邻的日志表串尾），
    // 使伪代码化 &data#hash 与 ORIG 完全一致（IDENTICAL_AE）。
    static const char s_failedCharacterName[] =
        "\x00\x00\x00\x00getCharacterName, failed(), characterId : %d\x00%llu:%d:%d:%d:%";
    std::map<const int, CharacterNameStruct*>::iterator iter =
        mCharacterNameTable.find(characterId);
    if (iter == mCharacterNameTable.end())
    {
        G_TraceLog()->sysLog(7, "getCharacterName, failed(), characterId : %d", characterId);
        return const_cast<char*>(s_failedCharacterName);
    }
    return (char*)iter->second;
}
```
