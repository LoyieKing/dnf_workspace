# db_dispatch

`_ZN4ARAD23Arad_Dispatcher_Manager11db_dispatchEiiP6Stream`

`ARAD::Arad_Dispatcher_Manager::db_dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Manager` | `0x08190080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190080  _ZN4ARAD23Arad_Dispatcher_Manager11db_dispatchEiiP6Stream
#           ARAD::Arad_Dispatcher_Manager::db_dispatch(int, int, Stream*)
# range [0x08190080, 0x0819011c]
08190080 +0x00:  push   %ebp
08190081 +0x01:  mov    %esp,%ebp
08190083 +0x03:  sub    $0x38,%esp
08190086 +0x06:  mov    0xc(%ebp),%edx
08190089 +0x09:  mov    0x8(%ebp),%eax
0819008c +0x0c:  add    $0x354,%edx
08190092 +0x12:  mov    (%eax,%edx,4),%eax
08190095 +0x15:  mov    %eax,-0x10(%ebp)
08190098 +0x18:  cmpl   $0x0,-0x10(%ebp)
0819009c +0x1c:  jne    081900a5 <+0x25>
0819009e +0x1e:  mov    $0x0,%eax
081900a3 +0x23:  jmp    0819011b <+0x9b>
081900a5 +0x25:  mov    -0x10(%ebp),%eax
081900a8 +0x28:  mov    (%eax),%eax
081900aa +0x2a:  add    $0x8,%eax
081900ad +0x2d:  mov    (%eax),%edx
081900af +0x2f:  mov    0x14(%ebp),%eax
081900b2 +0x32:  mov    %eax,0xc(%esp)
081900b6 +0x36:  mov    0x10(%ebp),%eax
081900b9 +0x39:  mov    %eax,0x8(%esp)
081900bd +0x3d:  mov    0xc(%ebp),%eax
081900c0 +0x40:  mov    %eax,0x4(%esp)
081900c4 +0x44:  mov    -0x10(%ebp),%eax
081900c7 +0x47:  mov    %eax,(%esp)
081900ca +0x4a:  call   *%edx
081900cc +0x4c:  mov    %eax,-0xc(%ebp)
081900cf +0x4f:  cmpl   $0x0,-0xc(%ebp)
081900d3 +0x53:  je     08190116 <+0x96>
081900d5 +0x55:  mov    -0xc(%ebp),%eax
081900d8 +0x58:  mov    %eax,0x1c(%esp)
081900dc +0x5c:  mov    0x10(%ebp),%eax
081900df +0x5f:  mov    %eax,0x18(%esp)
081900e3 +0x63:  mov    0xc(%ebp),%eax
081900e6 +0x66:  mov    %eax,0x14(%esp)
081900ea +0x6a:  movl   $"[ERROR] DB Dispatch Result dipCode[%d] uid[%d], ErrLine(%d)",0x10(%esp)
081900f2 +0x72:  movl   $0xab,0xc(%esp)
081900fa +0x7a:  movl   $&_ZZN4ARAD23Arad_Dispatcher_Manager11db_dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08190102 +0x82:  movl   $"localjapan/Arad_Dispatch_Manager.cpp",0x4(%esp)
0819010a +0x8a:  movl   $0x1,(%esp)
08190111 +0x91:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08190116 +0x96:  mov    $0x1,%eax
0819011b +0x9b:  leave
0819011c +0x9c:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Manager::db_dispatch @ 0x8190080

/* ARAD::Arad_Dispatcher_Manager::db_dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Manager::db_dispatch
          (Arad_Dispatcher_Manager *this,int param_1,int param_2,Stream *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + (param_1 + 0x354) * 4);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2,param_3);
    if (iVar3 != 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_Dispatch_Manager.cpp",
                 "bool ARAD::Arad_Dispatcher_Manager::db_dispatch(int, int, Stream*)",0xab,
                 "[ERROR] DB Dispatch Result dipCode[%d] uid[%d], ErrLine(%d)",param_1,param_2,iVar3
                );
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
