# dispatch_sig

`_ZN22Inter_LoadPrivateStore12dispatch_sigEP5CUserPci`

`Inter_LoadPrivateStore::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadPrivateStore` | `0x084cf55a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf55a  _ZN22Inter_LoadPrivateStore12dispatch_sigEP5CUserPci
#           Inter_LoadPrivateStore::dispatch_sig(CUser*, char*, int)
# range [0x084cf55a, 0x084cf5a3]
084cf55a +0x00:  push   %ebp
084cf55b +0x01:  mov    %esp,%ebp
084cf55d +0x03:  sub    $0x28,%esp
084cf560 +0x06:  mov    0xc(%ebp),%eax
084cf563 +0x09:  mov    %eax,(%esp)
084cf566 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cf56b +0x11:  cmp    $0x2,%eax
084cf56e +0x14:  setle  %al
084cf571 +0x17:  test   %al,%al
084cf573 +0x19:  je     084cf57c <+0x22>
084cf575 +0x1b:  mov    $0x0,%eax
084cf57a +0x20:  jmp    084cf5a2 <+0x48>
084cf57c +0x22:  mov    0x10(%ebp),%eax
084cf57f +0x25:  mov    %eax,-0xc(%ebp)
084cf582 +0x28:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
084cf587 +0x2d:  mov    -0xc(%ebp),%edx
084cf58a +0x30:  mov    %edx,0x8(%esp)
084cf58e +0x34:  mov    0xc(%ebp),%edx
084cf591 +0x37:  mov    %edx,0x4(%esp)
084cf595 +0x3b:  mov    %eax,(%esp)
084cf598 +0x3e:  call   085cac16 <_ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE>  ; private_store::CPrivateStoreMgr::LoadPrivateStoreResponse(CUser*, private_store::SIG_PRIVATE_STORE*)
084cf59d +0x43:  mov    $0x0,%eax
084cf5a2 +0x48:  leave
084cf5a3 +0x49:  ret
```

## 反编译 C

```c
// Inter_LoadPrivateStore::dispatch_sig @ 0x84cf55a

/* Inter_LoadPrivateStore::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPrivateStore::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CPrivateStoreMgr *this;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::LoadPrivateStoreResponse
              (this,(CUser *)param_2,(SIG_PRIVATE_STORE *)param_3);
  }
  return 0;
}
```
