# SendAPCInfo

`_ZN17TowerOfDespairMgr11SendAPCInfoERK9TOD_LayerP5CUser`

`TowerOfDespairMgr::SendAPCInfo(TOD_Layer const&, CUser*)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08644338` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08644338  _ZN17TowerOfDespairMgr11SendAPCInfoERK9TOD_LayerP5CUser
#           TowerOfDespairMgr::SendAPCInfo(TOD_Layer const&, CUser*)
# range [0x08644338, 0x0864435f]
08644338 +0x00:  push   %ebp
08644339 +0x01:  mov    %esp,%ebp
0864433b +0x03:  sub    $0x18,%esp
0864433e +0x06:  mov    0x8(%ebp),%eax
08644341 +0x09:  mov    0x354(%eax),%eax
08644347 +0x0f:  mov    0x10(%ebp),%edx
0864434a +0x12:  mov    %edx,0x8(%esp)
0864434e +0x16:  mov    0xc(%ebp),%edx
08644351 +0x19:  mov    %edx,0x4(%esp)
08644355 +0x1d:  mov    %eax,(%esp)
08644358 +0x20:  call   085feee4 <_ZN22TowerOfDespair_APC_Mgr13Send_APC_InfoERK9TOD_LayerP5CUser>  ; TowerOfDespair_APC_Mgr::Send_APC_Info(TOD_Layer const&, CUser*)
0864435d +0x25:  leave
0864435e +0x26:  ret
0864435f +0x27:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::SendAPCInfo @ 0x8644338

/* TowerOfDespairMgr::SendAPCInfo(TOD_Layer const&, CUser*) */

void __thiscall
TowerOfDespairMgr::SendAPCInfo(TowerOfDespairMgr *this,TOD_Layer *param_1,CUser *param_2)

{
  TowerOfDespair_APC_Mgr::Send_APC_Info(*(TowerOfDespair_APC_Mgr **)(this + 0x354),param_1,param_2);
  return;
}
```
