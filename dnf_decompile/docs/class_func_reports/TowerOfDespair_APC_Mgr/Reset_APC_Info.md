# Reset_APC_Info

`_ZN22TowerOfDespair_APC_Mgr14Reset_APC_InfoEv`

`TowerOfDespair_APC_Mgr::Reset_APC_Info()`

| 类 | 地址 |
|---|---|
| `TowerOfDespair_APC_Mgr` | `0x085feed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085feed0  _ZN22TowerOfDespair_APC_Mgr14Reset_APC_InfoEv
#           TowerOfDespair_APC_Mgr::Reset_APC_Info()
# range [0x085feed0, 0x085feee3]
085feed0 +0x00:  push   %ebp
085feed1 +0x01:  mov    %esp,%ebp
085feed3 +0x03:  sub    $0x18,%esp
085feed6 +0x06:  mov    0x8(%ebp),%eax
085feed9 +0x09:  mov    %eax,(%esp)
085feedc +0x0c:  call   085ff2ae <_GLOBAL__I__ZN9TOD_LayerC2Et+0x1d1>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x1d1
085feee1 +0x11:  leave
085feee2 +0x12:  ret
085feee3 +0x13:  nop
```

## 反编译 C

```c
// TowerOfDespair_APC_Mgr::Reset_APC_Info @ 0x85feed0

/* TowerOfDespair_APC_Mgr::Reset_APC_Info() */

void __thiscall TowerOfDespair_APC_Mgr::Reset_APC_Info(TowerOfDespair_APC_Mgr *this)

{
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::clear((map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
           *)this);
  return;
}
```
