# unregister_dispatcher

`_ZN4ARAD15Arad_Dispatcher21unregister_dispatcherEi`

`ARAD::Arad_Dispatcher::unregister_dispatcher(int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher` | `0x0818e87c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818e87c  _ZN4ARAD15Arad_Dispatcher21unregister_dispatcherEi
#           ARAD::Arad_Dispatcher::unregister_dispatcher(int)
# range [0x0818e87c, 0x0818e897]
0818e87c +0x00:  push   %ebp
0818e87d +0x01:  mov    %esp,%ebp
0818e87f +0x03:  sub    $0x18,%esp
0818e882 +0x06:  call   0818e944 <_GLOBAL__I__ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream+0x61>  ; global constructors keyed to ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)+0x61
0818e887 +0x0b:  mov    0xc(%ebp),%edx
0818e88a +0x0e:  mov    %edx,0x4(%esp)
0818e88e +0x12:  mov    %eax,(%esp)
0818e891 +0x15:  call   0818fed6 <_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi>  ; ARAD::Arad_Dispatcher_Manager::unregister_dispatcher(int)
0818e896 +0x1a:  leave
0818e897 +0x1b:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher::unregister_dispatcher @ 0x818e87c

/* ARAD::Arad_Dispatcher::unregister_dispatcher(int) */

void __thiscall ARAD::Arad_Dispatcher::unregister_dispatcher(Arad_Dispatcher *this,int param_1)

{
  Arad_Dispatcher_Manager *this_00;
  
  this_00 = (Arad_Dispatcher_Manager *)GlobalInstance<ARAD::Arad_Dispatcher_Manager>::inst();
  Arad_Dispatcher_Manager::unregister_dispatcher(this_00,param_1);
  return;
}
```
