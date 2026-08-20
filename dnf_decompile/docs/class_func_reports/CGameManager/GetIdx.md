# GetIdx

`_ZN12CGameManager6GetIdxEP5CUser`

`CGameManager::GetIdx(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082948a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082948a2  _ZN12CGameManager6GetIdxEP5CUser
#           CGameManager::GetIdx(CUser*)
# range [0x082948a2, 0x082948c5]
082948a2 +0x00:  push   %ebp
082948a3 +0x01:  mov    %esp,%ebp
082948a5 +0x03:  sub    $0x28,%esp
082948a8 +0x06:  mov    0x8(%ebp),%eax
082948ab +0x09:  lea    0x4c(%eax),%edx
082948ae +0x0c:  mov    0xc(%ebp),%eax
082948b1 +0x0f:  mov    %eax,0x4(%esp)
082948b5 +0x13:  mov    %edx,(%esp)
082948b8 +0x16:  call   082b0622 <_GLOBAL__I__ZN4CLog5this_E+0xca49>  ; global constructors keyed to CLog::this_+0xca49
082948bd +0x1b:  mov    %eax,-0xc(%ebp)
082948c0 +0x1e:  mov    -0xc(%ebp),%eax
082948c3 +0x21:  leave
082948c4 +0x22:  ret
082948c5 +0x23:  nop
```

## 反编译 C

```c
// CGameManager::GetIdx @ 0x82948a2

/* CGameManager::GetIdx(CUser*) */

undefined4 __thiscall CGameManager::GetIdx(CGameManager *this,CUser *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<CUser,600>::GetIndex((StaticPool<CUser,600> *)(this + 0x4c),param_1);
  return uVar1;
}
```
