# _ZN14HandlerFor_DB_15DecryptPasswordEPKcPc

`HandlerFor_DB_::DecryptPassword(char const*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x806e358` | `0x10a` | `0x806ca5a` | `0x10a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x98,%esp
+sub    $0xa8,%esp
 movl   $0x40,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x90(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $0x40,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $0x18,0x8(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14DNFFLibWrapper10Hex2BinaryEPKcPhi>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14HandlerFor_DB_15DecryptPasswordEPKcPc+0xc4>
+je     <T> <_ZN14HandlerFor_DB_15DecryptPasswordEPKcPc+0xc1>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    0xc(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"Fail to decrypt DB Password for %s",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Fail to decrypt DB Password for %s\n",(%esp)
 call   <T> <printf>
 movl   $0x1,(%esp)
 call   <T> <exit>
-lea    -0x88(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x63fc(%edx),%ecx
 movl   $0x18,0xc(%esp)
-lea    -0x48(%ebp),%edx
+lea    -0x90(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN3nsl4CTEA7DecryptEPKcPcj>
 movl   $0x14,0x8(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x90(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void DecryptPassword(HandlerFor_DB_ * this, char * pInput, char *
   pOutput) */

void __thiscall
HandlerFor_DB_::_ZN14HandlerFor_DB_15DecryptPasswordEPKcPc
          (HandlerFor_DB_ *this,char *pInput,char *pOutput)

{
  bool bVar1;
  TraceLog *this_00;
  uchar local_8c [64];
  char local_4c [72];
  
                    /* Unresolved local var: char[64] p_decrypt_result@[???]
                       Unresolved local var: uchar[64] p_binary_decrypt_result@[???] */
  memset(local_4c,0,0x40);
  memset(local_8c,0,0x40);
  memset(pOutput,0,0x15);
  bVar1 = DNFFLibWrapper::Hex2Binary(pInput,local_8c,0x18);
  if (!bVar1) {
    this_00 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(this_00,7,"Fail to decrypt DB Password for %s",pInput);
    printf("Fail to decrypt DB Password for %s\n",pInput);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  nsl::CTEA::Decrypt(&this->mTEA,(char *)local_8c,local_4c,0x18);
  strncpy(pOutput,local_4c,0x14);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp)（约第 36 行）：

```cpp
void HandlerFor_DB_::DecryptPassword(const char* pInput, char* pOutput)
{
    // ORIG 槽位 p_decrypt@-0x48/p_binary@-0x88（大数组在上）；本工具链固定
    // p_decrypt@-0x90/p_binary@-0x48，声明序不可控——记录为帧打包伪影。
    char p_decrypt_result[72];
    unsigned char p_binary_decrypt_result[64];

    memset(p_decrypt_result, 0, 0x40);
    memset(p_binary_decrypt_result, 0, 0x40);
    memset(pOutput, 0, 0x15);
    if (!DNFFLibWrapper::Hex2Binary(pInput, p_binary_decrypt_result, 0x18))
    {
        G_TraceLog()->sysLog(7, "Fail to decrypt DB Password for %s", pInput);
        printf("Fail to decrypt DB Password for %s\n", pInput);
        exit(1);
    }
    mTEA.Decrypt((char*)p_binary_decrypt_result, p_decrypt_result, 0x18);
    strncpy(pOutput, p_decrypt_result, 0x14);
}
```
