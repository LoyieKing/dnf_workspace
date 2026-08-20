# register_dispatcher

`_ZN4ARAD23Arad_Dispatcher_Manager19register_dispatcherEPNS_15Arad_DispatcherE`

`ARAD::Arad_Dispatcher_Manager::register_dispatcher(ARAD::Arad_Dispatcher*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Manager` | `0x0818fe98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818fe98  _ZN4ARAD23Arad_Dispatcher_Manager19register_dispatcherEPNS_15Arad_DispatcherE
#           ARAD::Arad_Dispatcher_Manager::register_dispatcher(ARAD::Arad_Dispatcher*)
# range [0x0818fe98, 0x0818fed5]
0818fe98 +0x00:  push   %ebp
0818fe99 +0x01:  mov    %esp,%ebp
0818fe9b +0x03:  sub    $0x18,%esp
0818fe9e +0x06:  mov    0xc(%ebp),%eax
0818fea1 +0x09:  mov    %eax,(%esp)
0818fea4 +0x0c:  call   0818e898 <_ZN4ARAD15Arad_Dispatcher13dispathc_codeEv>  ; ARAD::Arad_Dispatcher::dispathc_code()
0818fea9 +0x11:  mov    0x8(%ebp),%edx
0818feac +0x14:  mov    0xc(%ebp),%ecx
0818feaf +0x17:  mov    %ecx,(%edx,%eax,4)
0818feb2 +0x1a:  mov    0xc(%ebp),%eax
0818feb5 +0x1d:  mov    %eax,(%esp)
0818feb8 +0x20:  call   0818e898 <_ZN4ARAD15Arad_Dispatcher13dispathc_codeEv>  ; ARAD::Arad_Dispatcher::dispathc_code()
0818febd +0x25:  mov    %eax,%edx
0818febf +0x27:  mov    0x8(%ebp),%eax
0818fec2 +0x2a:  lea    0x354(%edx),%ecx
0818fec8 +0x30:  mov    0xc(%ebp),%edx
0818fecb +0x33:  mov    %edx,(%eax,%ecx,4)
0818fece +0x36:  mov    $0x0,%eax
0818fed3 +0x3b:  leave
0818fed4 +0x3c:  ret
0818fed5 +0x3d:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Manager::register_dispatcher @ 0x818fe98

/* ARAD::Arad_Dispatcher_Manager::register_dispatcher(ARAD::Arad_Dispatcher*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Manager::register_dispatcher
          (Arad_Dispatcher_Manager *this,Arad_Dispatcher *param_1)

{
  int iVar1;
  
  iVar1 = Arad_Dispatcher::dispathc_code(param_1);
  *(Arad_Dispatcher **)(this + iVar1 * 4) = param_1;
  iVar1 = Arad_Dispatcher::dispathc_code(param_1);
  *(Arad_Dispatcher **)(this + (iVar1 + 0x354) * 4) = param_1;
  return 0;
}
```
