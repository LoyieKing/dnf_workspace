# register_dispatcher

`_ZN4ARAD15Arad_Dispatcher19register_dispatcherEPS0_`

`ARAD::Arad_Dispatcher::register_dispatcher(ARAD::Arad_Dispatcher*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher` | `0x0818e860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818e860  _ZN4ARAD15Arad_Dispatcher19register_dispatcherEPS0_
#           ARAD::Arad_Dispatcher::register_dispatcher(ARAD::Arad_Dispatcher*)
# range [0x0818e860, 0x0818e87b]
0818e860 +0x00:  push   %ebp
0818e861 +0x01:  mov    %esp,%ebp
0818e863 +0x03:  sub    $0x18,%esp
0818e866 +0x06:  call   0818e944 <_GLOBAL__I__ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream+0x61>  ; global constructors keyed to ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)+0x61
0818e86b +0x0b:  mov    0xc(%ebp),%edx
0818e86e +0x0e:  mov    %edx,0x4(%esp)
0818e872 +0x12:  mov    %eax,(%esp)
0818e875 +0x15:  call   0818fe98 <_ZN4ARAD23Arad_Dispatcher_Manager19register_dispatcherEPNS_15Arad_DispatcherE>  ; ARAD::Arad_Dispatcher_Manager::register_dispatcher(ARAD::Arad_Dispatcher*)
0818e87a +0x1a:  leave
0818e87b +0x1b:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher::register_dispatcher @ 0x818e860

/* ARAD::Arad_Dispatcher::register_dispatcher(ARAD::Arad_Dispatcher*) */

void __thiscall
ARAD::Arad_Dispatcher::register_dispatcher(Arad_Dispatcher *this,Arad_Dispatcher *param_1)

{
  Arad_Dispatcher_Manager *this_00;
  
  this_00 = (Arad_Dispatcher_Manager *)GlobalInstance<ARAD::Arad_Dispatcher_Manager>::inst();
  Arad_Dispatcher_Manager::register_dispatcher(this_00,param_1);
  return;
}
```
