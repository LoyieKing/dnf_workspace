# GetNoSendSetPlayResultUser

`_ZN6CParty26GetNoSendSetPlayResultUserEi`

`CParty::GetNoSendSetPlayResultUser(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b2384` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b2384  _ZN6CParty26GetNoSendSetPlayResultUserEi
#           CParty::GetNoSendSetPlayResultUser(int)
# range [0x085b2384, 0x085b2411]
085b2384 +0x00:  push   %ebp
085b2385 +0x01:  mov    %esp,%ebp
085b2387 +0x03:  sub    $0x18,%esp
085b238a +0x06:  mov    0xc(%ebp),%edx
085b238d +0x09:  mov    0x8(%ebp),%ecx
085b2390 +0x0c:  mov    %edx,%eax
085b2392 +0x0e:  add    %eax,%eax
085b2394 +0x10:  add    %edx,%eax
085b2396 +0x12:  shl    $0x3,%eax
085b2399 +0x15:  lea    (%ecx,%eax,1),%eax
085b239c +0x18:  add    $0x78,%eax
085b239f +0x1b:  mov    (%eax),%eax
085b23a1 +0x1d:  test   %eax,%eax
085b23a3 +0x1f:  je     085b240b <+0x87>
085b23a5 +0x21:  mov    0xc(%ebp),%edx
085b23a8 +0x24:  mov    0x8(%ebp),%ecx
085b23ab +0x27:  mov    %edx,%eax
085b23ad +0x29:  add    %eax,%eax
085b23af +0x2b:  add    %edx,%eax
085b23b1 +0x2d:  shl    $0x3,%eax
085b23b4 +0x30:  lea    (%ecx,%eax,1),%eax
085b23b7 +0x33:  add    $0x70,%eax
085b23ba +0x36:  movzbl 0xc(%eax),%eax
085b23be +0x3a:  test   %al,%al
085b23c0 +0x3c:  je     085b240b <+0x87>
085b23c2 +0x3e:  mov    0xc(%ebp),%edx
085b23c5 +0x41:  mov    0x8(%ebp),%ecx
085b23c8 +0x44:  mov    %edx,%eax
085b23ca +0x46:  add    %eax,%eax
085b23cc +0x48:  add    %edx,%eax
085b23ce +0x4a:  shl    $0x3,%eax
085b23d1 +0x4d:  lea    (%ecx,%eax,1),%eax
085b23d4 +0x50:  add    $0x78,%eax
085b23d7 +0x53:  mov    (%eax),%eax
085b23d9 +0x55:  mov    %eax,(%esp)
085b23dc +0x58:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085b23e1 +0x5d:  test   %eax,%eax
085b23e3 +0x5f:  setne  %al
085b23e6 +0x62:  test   %al,%al
085b23e8 +0x64:  je     085b240b <+0x87>
085b23ea +0x66:  mov    0xc(%ebp),%edx
085b23ed +0x69:  mov    0x8(%ebp),%ecx
085b23f0 +0x6c:  mov    %edx,%eax
085b23f2 +0x6e:  add    %eax,%eax
085b23f4 +0x70:  add    %edx,%eax
085b23f6 +0x72:  shl    $0x3,%eax
085b23f9 +0x75:  lea    (%ecx,%eax,1),%eax
085b23fc +0x78:  add    $0x78,%eax
085b23ff +0x7b:  mov    (%eax),%eax
085b2401 +0x7d:  mov    %eax,(%esp)
085b2404 +0x80:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085b2409 +0x85:  jmp    085b2410 <+0x8c>
085b240b +0x87:  mov    $"",%eax
085b2410 +0x8c:  leave
085b2411 +0x8d:  ret
```

## 反编译 C

```c
// CParty::GetNoSendSetPlayResultUser @ 0x85b2384

/* CParty::GetNoSendSetPlayResultUser(int) */

undefined * __thiscall CParty::GetNoSendSetPlayResultUser(CParty *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (((*(int *)(this + param_1 * 0x18 + 0x78) != 0) && (this[param_1 * 0x18 + 0x7c] != (CParty)0x0)
      ) && (iVar1 = CUserCharacInfo::getCurCharacR
                              (*(CUserCharacInfo **)(this + param_1 * 0x18 + 0x78)), iVar1 != 0)) {
    puVar2 = (undefined *)
             CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + param_1 * 0x18 + 0x78));
    return puVar2;
  }
  return &DAT_08cb9760;
}
```
