# SetAPCInfo

`_ZN17TowerOfDespairMgr10SetAPCInfoEjRK8_APCInfo`

`TowerOfDespairMgr::SetAPCInfo(unsigned int, _APCInfo const&)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x086442ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086442ca  _ZN17TowerOfDespairMgr10SetAPCInfoEjRK8_APCInfo
#           TowerOfDespairMgr::SetAPCInfo(unsigned int, _APCInfo const&)
# range [0x086442ca, 0x0864431d]
086442ca +0x00:  push   %ebp
086442cb +0x01:  mov    %esp,%ebp
086442cd +0x03:  sub    $0x28,%esp
086442d0 +0x06:  mov    0x8(%ebp),%eax
086442d3 +0x09:  lea    0x340(%eax),%edx
086442d9 +0x0f:  mov    0xc(%ebp),%eax
086442dc +0x12:  mov    %eax,0x4(%esp)
086442e0 +0x16:  mov    %edx,(%esp)
086442e3 +0x19:  call   080e2564 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x30a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x30a
086442e8 +0x1e:  mov    (%eax),%eax
086442ea +0x20:  movzwl %ax,%eax
086442ed +0x23:  mov    %eax,0x4(%esp)
086442f1 +0x27:  lea    -0xa(%ebp),%eax
086442f4 +0x2a:  mov    %eax,(%esp)
086442f7 +0x2d:  call   085fe7b4 <_ZN9TOD_LayerC1Et>  ; TOD_Layer::TOD_Layer(unsigned short)
086442fc +0x32:  mov    0x8(%ebp),%eax
086442ff +0x35:  mov    0x354(%eax),%eax
08644305 +0x3b:  mov    0x10(%ebp),%edx
08644308 +0x3e:  mov    %edx,0x8(%esp)
0864430c +0x42:  lea    -0xa(%ebp),%edx
0864430f +0x45:  mov    %edx,0x4(%esp)
08644313 +0x49:  mov    %eax,(%esp)
08644316 +0x4c:  call   085fed2e <_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo>  ; TowerOfDespair_APC_Mgr::Set_APC_Info(TOD_Layer const&, _APCInfo const&)
0864431b +0x51:  leave
0864431c +0x52:  ret
0864431d +0x53:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::SetAPCInfo @ 0x86442ca

/* TowerOfDespairMgr::SetAPCInfo(unsigned int, _APCInfo const&) */

void __thiscall
TowerOfDespairMgr::SetAPCInfo(TowerOfDespairMgr *this,uint param_1,_APCInfo *param_2)

{
  undefined4 *puVar1;
  TOD_Layer local_e [10];
  
  puVar1 = (undefined4 *)
           std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                     ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x340),param_1);
  TOD_Layer::TOD_Layer(local_e,(ushort)*puVar1);
  TowerOfDespair_APC_Mgr::Set_APC_Info(*(TowerOfDespair_APC_Mgr **)(this + 0x354),local_e,param_2);
  return;
}
```
