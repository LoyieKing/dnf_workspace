# Get_APCIndexByLayer

`_ZN17TowerOfDespairMgr19Get_APCIndexByLayerEj`

`TowerOfDespairMgr::Get_APCIndexByLayer(unsigned int)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08643d9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643d9c  _ZN17TowerOfDespairMgr19Get_APCIndexByLayerEj
#           TowerOfDespairMgr::Get_APCIndexByLayer(unsigned int)
# range [0x08643d9c, 0x08643e49]
08643d9c +0x00:  push   %ebp
08643d9d +0x01:  mov    %esp,%ebp
08643d9f +0x03:  sub    $0x28,%esp
08643da2 +0x06:  mov    0xc(%ebp),%eax
08643da5 +0x09:  cmp    $0x64,%eax
08643da8 +0x0c:  jbe    08643db4 <+0x18>
08643daa +0x0e:  mov    $0x0,%eax
08643daf +0x13:  jmp    08643e48 <+0xac>
08643db4 +0x18:  mov    0x8(%ebp),%eax
08643db7 +0x1b:  lea    0x340(%eax),%edx
08643dbd +0x21:  lea    -0x14(%ebp),%eax
08643dc0 +0x24:  mov    %edx,0x4(%esp)
08643dc4 +0x28:  mov    %eax,(%esp)
08643dc7 +0x2b:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
08643dcc +0x30:  sub    $0x4,%esp
08643dcf +0x33:  mov    0x8(%ebp),%eax
08643dd2 +0x36:  lea    0x340(%eax),%edx
08643dd8 +0x3c:  lea    -0x10(%ebp),%eax
08643ddb +0x3f:  mov    %edx,0x4(%esp)
08643ddf +0x43:  mov    %eax,(%esp)
08643de2 +0x46:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
08643de7 +0x4b:  sub    $0x4,%esp
08643dea +0x4e:  lea    -0x18(%ebp),%eax
08643ded +0x51:  lea    0xc(%ebp),%edx
08643df0 +0x54:  mov    %edx,0xc(%esp)
08643df4 +0x58:  mov    -0x14(%ebp),%edx
08643df7 +0x5b:  mov    %edx,0x8(%esp)
08643dfb +0x5f:  mov    -0x10(%ebp),%edx
08643dfe +0x62:  mov    %edx,0x4(%esp)
08643e02 +0x66:  mov    %eax,(%esp)
08643e05 +0x69:  call   0815266b <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1fa0>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1fa0
08643e0a +0x6e:  sub    $0x4,%esp
08643e0d +0x71:  mov    0x8(%ebp),%eax
08643e10 +0x74:  lea    0x340(%eax),%edx
08643e16 +0x7a:  lea    -0xc(%ebp),%eax
08643e19 +0x7d:  mov    %edx,0x4(%esp)
08643e1d +0x81:  mov    %eax,(%esp)
08643e20 +0x84:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
08643e25 +0x89:  sub    $0x4,%esp
08643e28 +0x8c:  lea    -0xc(%ebp),%eax
08643e2b +0x8f:  mov    %eax,0x4(%esp)
08643e2f +0x93:  lea    -0x18(%ebp),%eax
08643e32 +0x96:  mov    %eax,(%esp)
08643e35 +0x99:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
08643e3a +0x9e:  test   %al,%al
08643e3c +0xa0:  je     08643e43 <+0xa7>
08643e3e +0xa2:  mov    0xc(%ebp),%eax
08643e41 +0xa5:  jmp    08643e48 <+0xac>
08643e43 +0xa7:  mov    $0xffffffff,%eax
08643e48 +0xac:  leave
08643e49 +0xad:  ret
```

## 反编译 C

```c
// TowerOfDespairMgr::Get_APCIndexByLayer @ 0x8643d9c

/* TowerOfDespairMgr::Get_APCIndexByLayer(unsigned int) */

uint __thiscall TowerOfDespairMgr::Get_APCIndexByLayer(TowerOfDespairMgr *this,uint param_1)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  if (param_1 < 0x65) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    std::
    find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
              (local_1c,local_14,local_18,&param_1);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
    if (!bVar1) {
      param_1 = 0xffffffff;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
```
