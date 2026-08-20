# GetRecord

`_ZNK5CUser9GetRecordEP12SIG_LOAD_ETC`

`CUser::GetRecord(SIG_LOAD_ETC*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08677dd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08677dd8  _ZNK5CUser9GetRecordEP12SIG_LOAD_ETC
#           CUser::GetRecord(SIG_LOAD_ETC*) const
# range [0x08677dd8, 0x08677f23]
08677dd8 +0x000:  push   %ebp
08677dd9 +0x001:  mov    %esp,%ebp
08677ddb +0x003:  push   %edi
08677ddc +0x004:  push   %esi
08677ddd +0x005:  push   %ebx
08677dde +0x006:  sub    $0x2c,%esp
08677de1 +0x009:  mov    0x8(%ebp),%eax
08677de4 +0x00c:  mov    %eax,(%esp)
08677de7 +0x00f:  call   08696200 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a55>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a55
08677dec +0x014:  lea    -0x20(%ebp),%edx
08677def +0x017:  mov    %eax,0x4(%esp)
08677df3 +0x01b:  mov    %edx,(%esp)
08677df6 +0x01e:  call   0869be8e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x86e3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x86e3
08677dfb +0x023:  sub    $0x4,%esp
08677dfe +0x026:  mov    0x8(%ebp),%eax
08677e01 +0x029:  mov    %eax,(%esp)
08677e04 +0x02c:  call   08696200 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a55>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a55
08677e09 +0x031:  lea    -0x24(%ebp),%edx
08677e0c +0x034:  mov    %eax,0x4(%esp)
08677e10 +0x038:  mov    %edx,(%esp)
08677e13 +0x03b:  call   0869beb4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8709>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8709
08677e18 +0x040:  sub    $0x4,%esp
08677e1b +0x043:  movl   $0x0,-0x1c(%ebp)
08677e22 +0x04a:  jmp    08677ecb <+0xf3>
08677e27 +0x04f:  mov    -0x1c(%ebp),%ebx
08677e2a +0x052:  lea    -0x20(%ebp),%eax
08677e2d +0x055:  mov    %eax,(%esp)
08677e30 +0x058:  call   0869bf0c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8761>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8761
08677e35 +0x05d:  mov    %eax,%edx
08677e37 +0x05f:  mov    0xc(%ebp),%ecx
08677e3a +0x062:  mov    %ebx,%eax
08677e3c +0x064:  shl    $0x2,%eax
08677e3f +0x067:  add    %ebx,%eax
08677e41 +0x069:  shl    $0x4,%eax
08677e44 +0x06c:  lea    (%ecx,%eax,1),%eax
08677e47 +0x06f:  add    $0x3c0,%eax
08677e4c +0x074:  add    $0x8,%eax
08677e4f +0x077:  add    $0x4,%edx
08677e52 +0x07a:  mov    $0x50,%ebx
08677e57 +0x07f:  mov    %eax,%ecx
08677e59 +0x081:  and    $0x1,%ecx
08677e5c +0x084:  test   %ecx,%ecx
08677e5e +0x086:  je     08677e6e <+0x96>
08677e60 +0x088:  movzbl (%edx),%ecx
08677e63 +0x08b:  mov    %cl,(%eax)
08677e65 +0x08d:  add    $0x1,%eax
08677e68 +0x090:  add    $0x1,%edx
08677e6b +0x093:  sub    $0x1,%ebx
08677e6e +0x096:  mov    %eax,%ecx
08677e70 +0x098:  and    $0x2,%ecx
08677e73 +0x09b:  test   %ecx,%ecx
08677e75 +0x09d:  je     08677e86 <+0xae>
08677e77 +0x09f:  movzwl (%edx),%ecx
08677e7a +0x0a2:  mov    %cx,(%eax)
08677e7d +0x0a5:  add    $0x2,%eax
08677e80 +0x0a8:  add    $0x2,%edx
08677e83 +0x0ab:  sub    $0x2,%ebx
08677e86 +0x0ae:  mov    %ebx,%ecx
08677e88 +0x0b0:  shr    $0x2,%ecx
08677e8b +0x0b3:  mov    %eax,%edi
08677e8d +0x0b5:  mov    %edx,%esi
08677e8f +0x0b7:  rep movsl %ds:(%esi),%es:(%edi)
08677e91 +0x0b9:  mov    %esi,%edx
08677e93 +0x0bb:  mov    %edi,%eax
08677e95 +0x0bd:  mov    $0x0,%ecx
08677e9a +0x0c2:  mov    %ebx,%esi
08677e9c +0x0c4:  and    $0x2,%esi
08677e9f +0x0c7:  test   %esi,%esi
08677ea1 +0x0c9:  je     08677eae <+0xd6>
08677ea3 +0x0cb:  movzwl (%edx,%ecx,1),%esi
08677ea7 +0x0cf:  mov    %si,(%eax,%ecx,1)
08677eab +0x0d3:  add    $0x2,%ecx
08677eae +0x0d6:  and    $0x1,%ebx
08677eb1 +0x0d9:  test   %ebx,%ebx
08677eb3 +0x0db:  je     08677ebc <+0xe4>
08677eb5 +0x0dd:  movzbl (%edx,%ecx,1),%edx
08677eb9 +0x0e1:  mov    %dl,(%eax,%ecx,1)
08677ebc +0x0e4:  lea    -0x20(%ebp),%eax
08677ebf +0x0e7:  mov    %eax,(%esp)
08677ec2 +0x0ea:  call   0869beee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8743>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8743
08677ec7 +0x0ef:  addl   $0x1,-0x1c(%ebp)
08677ecb +0x0f3:  lea    -0x24(%ebp),%eax
08677ece +0x0f6:  mov    %eax,0x4(%esp)
08677ed2 +0x0fa:  lea    -0x20(%ebp),%eax
08677ed5 +0x0fd:  mov    %eax,(%esp)
08677ed8 +0x100:  call   0869beda <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x872f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x872f
08677edd +0x105:  test   %al,%al
08677edf +0x107:  je     08677eee <+0x116>
08677ee1 +0x109:  cmpl   $0x63,-0x1c(%ebp)
08677ee5 +0x10d:  jg     08677eee <+0x116>
08677ee7 +0x10f:  mov    $0x1,%eax
08677eec +0x114:  jmp    08677ef3 <+0x11b>
08677eee +0x116:  mov    $0x0,%eax
08677ef3 +0x11b:  test   %al,%al
08677ef5 +0x11d:  jne    08677e27 <+0x4f>
08677efb +0x123:  mov    0x8(%ebp),%eax
08677efe +0x126:  mov    %eax,(%esp)
08677f01 +0x129:  call   08696200 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2a55>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2a55
08677f06 +0x12e:  mov    %eax,(%esp)
08677f09 +0x131:  call   0869bf1a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x876f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x876f
08677f0e +0x136:  mov    %eax,%edx
08677f10 +0x138:  mov    0xc(%ebp),%eax
08677f13 +0x13b:  mov    %edx,0x3c4(%eax)
08677f19 +0x141:  lea    -0xc(%ebp),%esp
08677f1c +0x144:  add    $0x0,%esp
08677f1f +0x147:  pop    %ebx
08677f20 +0x148:  pop    %esi
08677f21 +0x149:  pop    %edi
08677f22 +0x14a:  pop    %ebp
08677f23 +0x14b:  ret
```

## 反编译 C

```c
// CUser::GetRecord @ 0x8677dd8

/* CUser::GetRecord(SIG_LOAD_ETC*) const */

void __thiscall CUser::GetRecord(CUser *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  int iVar2;
  SIG_LOAD_ETC *pSVar3;
  map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
  *this_00;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  SIG_LOAD_ETC *pSVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
  local_28 [4];
  map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
  local_24 [4];
  int local_20;
  
  bVar10 = 0;
  CUserCharacInfo::getBattleRecordRefR((CUserCharacInfo *)this);
  std::map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>::
  begin(local_24);
  CUserCharacInfo::getBattleRecordRefR((CUserCharacInfo *)this);
  std::map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>::
  end(local_28);
  local_20 = 0;
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,GameResultType>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,GameResultType>> *)local_24,
                       (_Rb_tree_const_iterator *)local_28);
    iVar6 = local_20;
    if ((cVar1 == '\0') || (99 < local_20)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,GameResultType>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,GameResultType>> *)local_24);
    pSVar3 = param_1 + iVar6 * 0x50 + 0x3c8;
    pSVar7 = (SIG_LOAD_ETC *)(iVar2 + 4);
    uVar8 = 0x50;
    bVar9 = ((uint)pSVar3 & 1) != 0;
    if (bVar9) {
      *pSVar3 = *pSVar7;
      pSVar3 = param_1 + iVar6 * 0x50 + 0x3c9;
      pSVar7 = (SIG_LOAD_ETC *)(iVar2 + 5);
      uVar8 = 0x4f;
    }
    if (((uint)pSVar3 & 2) != 0) {
      *(undefined2 *)pSVar3 = *(undefined2 *)pSVar7;
      pSVar3 = pSVar3 + 2;
      pSVar7 = pSVar7 + 2;
      uVar8 = uVar8 - 2;
    }
    for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pSVar3 = *(undefined4 *)pSVar7;
      pSVar7 = pSVar7 + (uint)bVar10 * -8 + 4;
      pSVar3 = pSVar3 + (uint)bVar10 * -8 + 4;
    }
    iVar6 = 0;
    if ((uVar8 & 2) != 0) {
      *(undefined2 *)pSVar3 = *(undefined2 *)pSVar7;
      iVar6 = 2;
    }
    if (bVar9) {
      pSVar3[iVar6] = pSVar7[iVar6];
    }
    std::_Rb_tree_const_iterator<std::pair<int_const,GameResultType>>::operator++
              ((_Rb_tree_const_iterator<std::pair<int_const,GameResultType>> *)local_24);
    local_20 = local_20 + 1;
  }
  this_00 = (map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
             *)CUserCharacInfo::getBattleRecordRefR((CUserCharacInfo *)this);
  uVar4 = std::
          map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>
          ::size(this_00);
  *(undefined4 *)(param_1 + 0x3c4) = uVar4;
  return;
}
```
