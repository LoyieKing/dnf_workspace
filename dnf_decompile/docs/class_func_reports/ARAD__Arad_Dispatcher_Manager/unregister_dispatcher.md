# unregister_dispatcher

`_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi`

`ARAD::Arad_Dispatcher_Manager::unregister_dispatcher(int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Manager` | `0x0818fed6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818fed6  _ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi
#           ARAD::Arad_Dispatcher_Manager::unregister_dispatcher(int)
# range [0x0818fed6, 0x0818ff6b]
0818fed6 +0x00:  push   %ebp
0818fed7 +0x01:  mov    %esp,%ebp
0818fed9 +0x03:  sub    $0x28,%esp
0818fedc +0x06:  mov    0xc(%ebp),%edx
0818fedf +0x09:  mov    0x8(%ebp),%eax
0818fee2 +0x0c:  mov    (%eax,%edx,4),%eax
0818fee5 +0x0f:  mov    %eax,-0x10(%ebp)
0818fee8 +0x12:  cmpl   $0x0,-0x10(%ebp)
0818feec +0x16:  jne    0818ff1a <+0x44>
0818feee +0x18:  cmpl   $0x0,-0x10(%ebp)
0818fef2 +0x1c:  je     0818ff06 <+0x30>
0818fef4 +0x1e:  mov    -0x10(%ebp),%eax
0818fef7 +0x21:  mov    (%eax),%eax
0818fef9 +0x23:  add    $0x4,%eax
0818fefc +0x26:  mov    (%eax),%edx
0818fefe +0x28:  mov    -0x10(%ebp),%eax
0818ff01 +0x2b:  mov    %eax,(%esp)
0818ff04 +0x2e:  call   *%edx
0818ff06 +0x30:  mov    0xc(%ebp),%edx
0818ff09 +0x33:  mov    0x8(%ebp),%eax
0818ff0c +0x36:  movl   $0x0,(%eax,%edx,4)
0818ff13 +0x3d:  mov    $0x0,%eax
0818ff18 +0x42:  jmp    0818ff69 <+0x93>
0818ff1a +0x44:  mov    0xc(%ebp),%edx
0818ff1d +0x47:  mov    0x8(%ebp),%eax
0818ff20 +0x4a:  add    $0x354,%edx
0818ff26 +0x50:  mov    (%eax,%edx,4),%eax
0818ff29 +0x53:  mov    %eax,-0xc(%ebp)
0818ff2c +0x56:  cmpl   $0x0,-0xc(%ebp)
0818ff30 +0x5a:  jne    0818ff64 <+0x8e>
0818ff32 +0x5c:  cmpl   $0x0,-0xc(%ebp)
0818ff36 +0x60:  je     0818ff4a <+0x74>
0818ff38 +0x62:  mov    -0xc(%ebp),%eax
0818ff3b +0x65:  mov    (%eax),%eax
0818ff3d +0x67:  add    $0x4,%eax
0818ff40 +0x6a:  mov    (%eax),%edx
0818ff42 +0x6c:  mov    -0xc(%ebp),%eax
0818ff45 +0x6f:  mov    %eax,(%esp)
0818ff48 +0x72:  call   *%edx
0818ff4a +0x74:  mov    0xc(%ebp),%edx
0818ff4d +0x77:  mov    0x8(%ebp),%eax
0818ff50 +0x7a:  add    $0x354,%edx
0818ff56 +0x80:  movl   $0x0,(%eax,%edx,4)
0818ff5d +0x87:  mov    $0x0,%eax
0818ff62 +0x8c:  jmp    0818ff69 <+0x93>
0818ff64 +0x8e:  mov    $0x1,%eax
0818ff69 +0x93:  leave
0818ff6a +0x94:  ret
0818ff6b +0x95:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Manager::unregister_dispatcher @ 0x818fed6

/* WARNING: Removing unreachable block (ram,0x0818fef4) */
/* WARNING: Removing unreachable block (ram,0x0818ff38) */
/* ARAD::Arad_Dispatcher_Manager::unregister_dispatcher(int) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Manager::unregister_dispatcher(Arad_Dispatcher_Manager *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + param_1 * 4) == 0) {
    *(undefined4 *)(this + param_1 * 4) = 0;
    uVar1 = 0;
  }
  else if (*(int *)(this + (param_1 + 0x354) * 4) == 0) {
    *(undefined4 *)(this + (param_1 + 0x354) * 4) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
