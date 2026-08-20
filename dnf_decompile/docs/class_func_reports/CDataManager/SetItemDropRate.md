# SetItemDropRate

`_ZN12CDataManager15SetItemDropRateEf`

`CDataManager::SetItemDropRate(float)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083607d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083607d8  _ZN12CDataManager15SetItemDropRateEf
#           CDataManager::SetItemDropRate(float)
# range [0x083607d8, 0x08360913]
083607d8 +0x000:  push   %ebp
083607d9 +0x001:  mov    %esp,%ebp
083607db +0x003:  sub    $0x48,%esp
083607de +0x006:  mov    0x8(%ebp),%eax
083607e1 +0x009:  flds   0xb3f0(%eax)
083607e7 +0x00f:  flds   0xc(%ebp)
083607ea +0x012:  fxch   %st(1)
083607ec +0x014:  fucompp
083607ee +0x016:  fnstsw %ax
083607f0 +0x018:  sahf
083607f1 +0x019:  jp     083607f9 <+0x21>
083607f3 +0x01b:  je     08360910 <+0x138>
083607f9 +0x021:  mov    0x8(%ebp),%eax
083607fc +0x024:  flds   0xb3f0(%eax)
08360802 +0x02a:  flds   0xc(%ebp)
08360805 +0x02d:  fdivp  %st,%st(1)
08360807 +0x02f:  fstps  -0x1c(%ebp)
0836080a +0x032:  mov    0x8(%ebp),%eax
0836080d +0x035:  mov    0xc(%ebp),%edx
08360810 +0x038:  mov    %edx,0xb3f0(%eax)
08360816 +0x03e:  mov    0x8(%ebp),%eax
08360819 +0x041:  mov    0x8cc0(%eax),%eax
0836081f +0x047:  mov    0xc(%ebp),%edx
08360822 +0x04a:  mov    %edx,0x4(%esp)
08360826 +0x04e:  mov    %eax,(%esp)
08360829 +0x051:  call   08534278 <_ZN8WongWork17CItemGeneratorMgr12setDropRatioEf>  ; WongWork::CItemGeneratorMgr::setDropRatio(float)
0836082e +0x056:  movl   $0x0,-0x18(%ebp)
08360835 +0x05d:  jmp    08360884 <+0xac>
08360837 +0x05f:  mov    -0x18(%ebp),%eax
0836083a +0x062:  mov    0x8(%ebp),%edx
0836083d +0x065:  add    $0x468,%edx
08360843 +0x06b:  mov    %eax,0x4(%esp)
08360847 +0x06f:  mov    %edx,(%esp)
0836084a +0x072:  call   08394430 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23ed0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23ed0
0836084f +0x077:  mov    %eax,-0x14(%ebp)
08360852 +0x07a:  mov    -0x14(%ebp),%eax
08360855 +0x07d:  mov    0x10(%eax),%eax
08360858 +0x080:  mov    %eax,-0x2c(%ebp)
0836085b +0x083:  fildl  -0x2c(%ebp)
0836085e +0x086:  fmuls  -0x1c(%ebp)
08360861 +0x089:  fnstcw -0x2e(%ebp)
08360864 +0x08c:  movzwl -0x2e(%ebp),%eax
08360868 +0x090:  mov    $0xc,%ah
0836086a +0x092:  mov    %ax,-0x30(%ebp)
0836086e +0x096:  fldcw  -0x30(%ebp)
08360871 +0x099:  fistpl -0x2c(%ebp)
08360874 +0x09c:  fldcw  -0x2e(%ebp)
08360877 +0x09f:  mov    -0x2c(%ebp),%edx
0836087a +0x0a2:  mov    -0x14(%ebp),%eax
0836087d +0x0a5:  mov    %edx,0x10(%eax)
08360880 +0x0a8:  addl   $0x1,-0x18(%ebp)
08360884 +0x0ac:  mov    0x8(%ebp),%eax
08360887 +0x0af:  add    $0x468,%eax
0836088c +0x0b4:  mov    %eax,(%esp)
0836088f +0x0b7:  call   0839440e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23eae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23eae
08360894 +0x0bc:  cmp    -0x18(%ebp),%eax
08360897 +0x0bf:  setg   %al
0836089a +0x0c2:  test   %al,%al
0836089c +0x0c4:  jne    08360837 <+0x5f>
0836089e +0x0c6:  movl   $0x0,-0x10(%ebp)
083608a5 +0x0cd:  jmp    083608f4 <+0x11c>
083608a7 +0x0cf:  mov    -0x10(%ebp),%eax
083608aa +0x0d2:  mov    0x8(%ebp),%edx
083608ad +0x0d5:  add    $0x428,%edx
083608b3 +0x0db:  mov    %eax,0x4(%esp)
083608b7 +0x0df:  mov    %edx,(%esp)
083608ba +0x0e2:  call   08394430 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23ed0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23ed0
083608bf +0x0e7:  mov    %eax,-0xc(%ebp)
083608c2 +0x0ea:  mov    -0xc(%ebp),%eax
083608c5 +0x0ed:  mov    0x10(%eax),%eax
083608c8 +0x0f0:  mov    %eax,-0x2c(%ebp)
083608cb +0x0f3:  fildl  -0x2c(%ebp)
083608ce +0x0f6:  fmuls  -0x1c(%ebp)
083608d1 +0x0f9:  fnstcw -0x2e(%ebp)
083608d4 +0x0fc:  movzwl -0x2e(%ebp),%eax
083608d8 +0x100:  mov    $0xc,%ah
083608da +0x102:  mov    %ax,-0x30(%ebp)
083608de +0x106:  fldcw  -0x30(%ebp)
083608e1 +0x109:  fistpl -0x2c(%ebp)
083608e4 +0x10c:  fldcw  -0x2e(%ebp)
083608e7 +0x10f:  mov    -0x2c(%ebp),%edx
083608ea +0x112:  mov    -0xc(%ebp),%eax
083608ed +0x115:  mov    %edx,0x10(%eax)
083608f0 +0x118:  addl   $0x1,-0x10(%ebp)
083608f4 +0x11c:  mov    0x8(%ebp),%eax
083608f7 +0x11f:  add    $0x428,%eax
083608fc +0x124:  mov    %eax,(%esp)
083608ff +0x127:  call   0839440e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23eae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23eae
08360904 +0x12c:  cmp    -0x10(%ebp),%eax
08360907 +0x12f:  setg   %al
0836090a +0x132:  test   %al,%al
0836090c +0x134:  jne    083608a7 <+0xcf>
0836090e +0x136:  jmp    08360911 <+0x139>
08360910 +0x138:  nop
08360911 +0x139:  leave
08360912 +0x13a:  ret
08360913 +0x13b:  nop
```

## 反编译 C

```c
// CDataManager::SetItemDropRate @ 0x83607d8

/* CDataManager::SetItemDropRate(float) */

void __thiscall CDataManager::SetItemDropRate(CDataManager *this,float param_1)

{
  float fVar1;
  int iVar2;
  uint local_1c;
  uint local_14;
  
  if (*(float *)(this + 0xb3f0) != param_1) {
    fVar1 = *(float *)(this + 0xb3f0);
    *(float *)(this + 0xb3f0) = param_1;
    WongWork::CItemGeneratorMgr::setDropRatio(*(CItemGeneratorMgr **)(this + 0x8cc0),param_1);
    for (local_1c = 0;
        iVar2 = std::vector<sItemGenRef,std::allocator<sItemGenRef>>::size
                          ((vector<sItemGenRef,std::allocator<sItemGenRef>> *)(this + 0x468)),
        (int)local_1c < iVar2; local_1c = local_1c + 1) {
      iVar2 = std::vector<sItemGenRef,std::allocator<sItemGenRef>>::operator[]
                        ((vector<sItemGenRef,std::allocator<sItemGenRef>> *)(this + 0x468),local_1c)
      ;
      *(int *)(iVar2 + 0x10) = (int)ROUND((float)*(int *)(iVar2 + 0x10) * (param_1 / fVar1));
    }
    for (local_14 = 0;
        iVar2 = std::vector<sItemGenRef,std::allocator<sItemGenRef>>::size
                          ((vector<sItemGenRef,std::allocator<sItemGenRef>> *)(this + 0x428)),
        (int)local_14 < iVar2; local_14 = local_14 + 1) {
      iVar2 = std::vector<sItemGenRef,std::allocator<sItemGenRef>>::operator[]
                        ((vector<sItemGenRef,std::allocator<sItemGenRef>> *)(this + 0x428),local_14)
      ;
      *(int *)(iVar2 + 0x10) = (int)ROUND((float)*(int *)(iVar2 + 0x10) * (param_1 / fVar1));
    }
  }
  return;
}
```
