# ConvertMapToStrcut

`_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj`

`CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854ccbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854ccbc  _ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj
#           CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*, unsigned int) const
# range [0x0854ccbc, 0x0854cddb]
0854ccbc +0x000:  push   %ebp
0854ccbd +0x001:  mov    %esp,%ebp
0854ccbf +0x003:  push   %ebx
0854ccc0 +0x004:  sub    $0x34,%esp
0854ccc3 +0x007:  mov    0xc(%ebp),%eax
0854ccc6 +0x00a:  mov    %eax,(%esp)
0854ccc9 +0x00d:  call   0854d5be <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0xb8>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0xb8
0854ccce +0x012:  test   %al,%al
0854ccd0 +0x014:  je     0854ccdc <+0x20>
0854ccd2 +0x016:  mov    $0x1,%eax
0854ccd7 +0x01b:  jmp    0854cdd6 <+0x11a>
0854ccdc +0x020:  mov    0xc(%ebp),%eax
0854ccdf +0x023:  mov    %eax,(%esp)
0854cce2 +0x026:  call   0854d5d2 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0xcc>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0xcc
0854cce7 +0x02b:  cmp    0x14(%ebp),%eax
0854ccea +0x02e:  seta   %al
0854cced +0x031:  test   %al,%al
0854ccef +0x033:  je     0854ccfb <+0x3f>
0854ccf1 +0x035:  mov    $0x0,%eax
0854ccf6 +0x03a:  jmp    0854cdd6 <+0x11a>
0854ccfb +0x03f:  lea    -0x18(%ebp),%eax
0854ccfe +0x042:  mov    %eax,(%esp)
0854cd01 +0x045:  call   0854d5e6 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0xe0>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0xe0
0854cd06 +0x04a:  lea    -0x1c(%ebp),%eax
0854cd09 +0x04d:  mov    0xc(%ebp),%edx
0854cd0c +0x050:  mov    %edx,0x4(%esp)
0854cd10 +0x054:  mov    %eax,(%esp)
0854cd13 +0x057:  call   0854d5f4 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0xee>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0xee
0854cd18 +0x05c:  sub    $0x4,%esp
0854cd1b +0x05f:  mov    -0x1c(%ebp),%eax
0854cd1e +0x062:  mov    %eax,-0x18(%ebp)
0854cd21 +0x065:  movl   $0x0,-0xc(%ebp)
0854cd28 +0x06c:  jmp    0854cd8a <+0xce>
0854cd2a +0x06e:  mov    -0xc(%ebp),%edx
0854cd2d +0x071:  mov    %edx,%eax
0854cd2f +0x073:  shl    $0x2,%eax
0854cd32 +0x076:  add    %edx,%eax
0854cd34 +0x078:  mov    %eax,%ebx
0854cd36 +0x07a:  add    0x10(%ebp),%ebx
0854cd39 +0x07d:  lea    -0x18(%ebp),%eax
0854cd3c +0x080:  mov    %eax,(%esp)
0854cd3f +0x083:  call   0854d692 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x18c>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x18c
0854cd44 +0x088:  mov    (%eax),%eax
0854cd46 +0x08a:  mov    %eax,(%ebx)
0854cd48 +0x08c:  mov    -0xc(%ebp),%edx
0854cd4b +0x08f:  mov    %edx,%eax
0854cd4d +0x091:  shl    $0x2,%eax
0854cd50 +0x094:  add    %edx,%eax
0854cd52 +0x096:  mov    %eax,%ebx
0854cd54 +0x098:  add    0x10(%ebp),%ebx
0854cd57 +0x09b:  lea    -0x18(%ebp),%eax
0854cd5a +0x09e:  mov    %eax,(%esp)
0854cd5d +0x0a1:  call   0854d692 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x18c>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x18c
0854cd62 +0x0a6:  movzbl 0x4(%eax),%eax
0854cd66 +0x0aa:  mov    %al,0x4(%ebx)
0854cd69 +0x0ad:  lea    -0x10(%ebp),%eax
0854cd6c +0x0b0:  movl   $0x0,0x8(%esp)
0854cd74 +0x0b8:  lea    -0x18(%ebp),%edx
0854cd77 +0x0bb:  mov    %edx,0x4(%esp)
0854cd7b +0x0bf:  mov    %eax,(%esp)
0854cd7e +0x0c2:  call   0854d654 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x14e>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x14e
0854cd83 +0x0c7:  sub    $0x4,%esp
0854cd86 +0x0ca:  addl   $0x1,-0xc(%ebp)
0854cd8a +0x0ce:  lea    -0x14(%ebp),%eax
0854cd8d +0x0d1:  mov    0xc(%ebp),%edx
0854cd90 +0x0d4:  mov    %edx,0x4(%esp)
0854cd94 +0x0d8:  mov    %eax,(%esp)
0854cd97 +0x0db:  call   0854d61a <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x114>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x114
0854cd9c +0x0e0:  sub    $0x4,%esp
0854cd9f +0x0e3:  lea    -0x14(%ebp),%eax
0854cda2 +0x0e6:  mov    %eax,0x4(%esp)
0854cda6 +0x0ea:  lea    -0x18(%ebp),%eax
0854cda9 +0x0ed:  mov    %eax,(%esp)
0854cdac +0x0f0:  call   0854d640 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x13a>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x13a
0854cdb1 +0x0f5:  test   %al,%al
0854cdb3 +0x0f7:  je     0854cdc4 <+0x108>
0854cdb5 +0x0f9:  mov    -0xc(%ebp),%eax
0854cdb8 +0x0fc:  cmp    0x14(%ebp),%eax
0854cdbb +0x0ff:  jae    0854cdc4 <+0x108>
0854cdbd +0x101:  mov    $0x1,%eax
0854cdc2 +0x106:  jmp    0854cdc9 <+0x10d>
0854cdc4 +0x108:  mov    $0x0,%eax
0854cdc9 +0x10d:  test   %al,%al
0854cdcb +0x10f:  jne    0854cd2a <+0x6e>
0854cdd1 +0x115:  mov    $0x1,%eax
0854cdd6 +0x11a:  mov    -0x4(%ebp),%ebx
0854cdd9 +0x11d:  leave
0854cdda +0x11e:  ret
0854cddb +0x11f:  nop
```

## 反编译 C

```c
// CKillMonsterInfo::ConvertMapToStrcut @ 0x854ccbc

/* CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*,
   unsigned int) const */

undefined4 __thiscall
CKillMonsterInfo::ConvertMapToStrcut
          (CKillMonsterInfo *this,map *param_1,stMonsterInfo_t *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> local_14 [4];
  uint local_10;
  
  cVar3 = std::
          map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
          ::empty((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
                   *)param_1);
  if (cVar3 == '\0') {
    uVar5 = std::
            map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
            ::size((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
                    *)param_1);
    if (param_3 < uVar5) {
      uVar4 = 0;
    }
    else {
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::
      _Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> *)&local_1c);
      std::
      map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
      ::begin((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
               *)&local_20);
      local_1c = local_20;
      local_10 = 0;
      while( true ) {
        std::
        map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
        ::end(local_18);
        cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::
                operator!=((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> *)
                           &local_1c,(_Rb_tree_const_iterator *)local_18);
        if ((cVar3 == '\0') || (param_3 <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        iVar2 = local_10 * 5;
        puVar6 = (undefined4 *)
                 std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::
                 operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> *)
                            &local_1c);
        *(undefined4 *)(param_2 + iVar2) = *puVar6;
        iVar2 = local_10 * 5;
        iVar7 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::
                operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> *)
                           &local_1c);
        param_2[iVar2 + 4] = *(stMonsterInfo_t *)(iVar7 + 4);
        std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator++
                  (local_14,(int)&local_1c);
        local_10 = local_10 + 1;
      }
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
```
