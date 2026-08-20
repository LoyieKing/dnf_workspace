# Enter

`_ZN13private_store16CPrivateStoreMgr5EnterEP5CUser`

`private_store::CPrivateStoreMgr::Enter(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085caa8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085caa8a  _ZN13private_store16CPrivateStoreMgr5EnterEP5CUser
#           private_store::CPrivateStoreMgr::Enter(CUser*)
# range [0x085caa8a, 0x085caaa9]
085caa8a +0x00:  push   %ebp
085caa8b +0x01:  mov    %esp,%ebp
085caa8d +0x03:  sub    $0x18,%esp
085caa90 +0x06:  mov    0xc(%ebp),%eax
085caa93 +0x09:  mov    %eax,0x4(%esp)
085caa97 +0x0d:  mov    0x8(%ebp),%eax
085caa9a +0x10:  mov    %eax,(%esp)
085caa9d +0x13:  call   085cab24 <_ZN13private_store16CPrivateStoreMgr16LoadPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::LoadPrivateStore(CUser*)
085caaa2 +0x18:  mov    $0x1,%eax
085caaa7 +0x1d:  leave
085caaa8 +0x1e:  ret
085caaa9 +0x1f:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::Enter @ 0x85caa8a

/* private_store::CPrivateStoreMgr::Enter(CUser*) */

undefined4 __thiscall private_store::CPrivateStoreMgr::Enter(CPrivateStoreMgr *this,CUser *param_1)

{
  LoadPrivateStore(this,param_1);
  return 1;
}
```
