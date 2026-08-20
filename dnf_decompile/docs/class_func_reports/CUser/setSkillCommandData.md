# setSkillCommandData

`_ZN5CUser19setSkillCommandDataEPc`

`CUser::setSkillCommandData(char*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08654924` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08654924  _ZN5CUser19setSkillCommandDataEPc
#           CUser::setSkillCommandData(char*)
# range [0x08654924, 0x08654b93]
08654924 +0x000:  push   %ebp
08654925 +0x001:  mov    %esp,%ebp
08654927 +0x003:  sub    $0x68,%esp
0865492a +0x006:  movl   $0xc8,-0x18(%ebp)
08654931 +0x00d:  mov    -0x18(%ebp),%eax
08654934 +0x010:  mov    0x8(%ebp),%edx
08654937 +0x013:  add    $0x703db,%edx
0865493d +0x019:  mov    %eax,0x8(%esp)
08654941 +0x01d:  mov    0xc(%ebp),%eax
08654944 +0x020:  mov    %eax,0x4(%esp)
08654948 +0x024:  mov    %edx,(%esp)
0865494b +0x027:  call   0807d8a0 <_init+0x198>
08654950 +0x02c:  mov    0x8(%ebp),%eax
08654953 +0x02f:  mov    %eax,(%esp)
08654956 +0x032:  call   08696bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3443
0865495b +0x037:  mov    %eax,-0x14(%ebp)
0865495e +0x03a:  cmpl   $0x0,-0x14(%ebp)
08654962 +0x03e:  je     08654b90 <+0x26c>
08654968 +0x044:  movl   $0x0,-0x10(%ebp)
0865496f +0x04b:  jmp    08654b5c <+0x238>
08654974 +0x050:  mov    -0x10(%ebp),%edx
08654977 +0x053:  mov    0x8(%ebp),%eax
0865497a +0x056:  add    $&_ZL14gUnicodeBuffer+0x11bc8,%edx
08654980 +0x05c:  movzbl 0xb(%eax,%edx,4),%ecx
08654985 +0x061:  movzbl 0xc(%eax,%edx,4),%eax
0865498a +0x066:  and    $0x3f,%eax
0865498d +0x069:  shl    $0x8,%eax
08654990 +0x06c:  or     %ecx,%eax
08654992 +0x06e:  test   %ax,%ax
08654995 +0x071:  je     08654b6d <+0x249>
0865499b +0x077:  lea    -0x54(%ebp),%eax
0865499e +0x07a:  mov    %eax,(%esp)
086549a1 +0x07d:  call   0822db66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3210>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3210
086549a6 +0x082:  mov    -0x10(%ebp),%edx
086549a9 +0x085:  mov    0x8(%ebp),%eax
086549ac +0x088:  add    $&_ZL14gUnicodeBuffer+0x11bc8,%edx
086549b2 +0x08e:  movzbl 0xb(%eax,%edx,4),%ecx
086549b7 +0x093:  movzbl 0xc(%eax,%edx,4),%eax
086549bc +0x098:  and    $0x3f,%eax
086549bf +0x09b:  shl    $0x8,%eax
086549c2 +0x09e:  or     %ecx,%eax
086549c4 +0x0a0:  mov    %ax,-0x54(%ebp)
086549c8 +0x0a4:  mov    -0x10(%ebp),%edx
086549cb +0x0a7:  mov    0x8(%ebp),%eax
086549ce +0x0aa:  add    $&_ZL14gUnicodeBuffer+0x11bc8,%edx
086549d4 +0x0b0:  movzbl 0xe(%eax,%edx,4),%eax
086549d9 +0x0b5:  shr    $0x5,%al
086549dc +0x0b8:  mov    %al,-0x52(%ebp)
086549df +0x0bb:  mov    -0x10(%ebp),%edx
086549e2 +0x0be:  mov    0x8(%ebp),%eax
086549e5 +0x0c1:  add    $&_ZL14gUnicodeBuffer+0x11bc8,%edx
086549eb +0x0c7:  movzwl 0xc(%eax,%edx,4),%eax
086549f0 +0x0cc:  shr    $0x6,%ax
086549f4 +0x0d0:  and    $0x7,%eax
086549f7 +0x0d3:  mov    %al,-0x51(%ebp)
086549fa +0x0d6:  mov    -0x10(%ebp),%edx
086549fd +0x0d9:  mov    0x8(%ebp),%eax
08654a00 +0x0dc:  add    $&_ZL14gUnicodeBuffer+0x11bc8,%edx
08654a06 +0x0e2:  movzbl 0xd(%eax,%edx,4),%eax
08654a0b +0x0e7:  shr    %al
08654a0d +0x0e9:  and    $0x7,%eax
08654a10 +0x0ec:  mov    %al,-0x50(%ebp)
08654a13 +0x0ef:  mov    -0x10(%ebp),%edx
08654a16 +0x0f2:  mov    0x8(%ebp),%eax
08654a19 +0x0f5:  add    $&_ZL14gUnicodeBuffer+0x11bc8,%edx
08654a1f +0x0fb:  movzbl 0xd(%eax,%edx,4),%eax
08654a24 +0x100:  shr    $0x4,%al
08654a27 +0x103:  and    $0x7,%eax
08654a2a +0x106:  mov    %al,-0x4f(%ebp)
08654a2d +0x109:  mov    -0x10(%ebp),%edx
08654a30 +0x10c:  mov    0x8(%ebp),%eax
08654a33 +0x10f:  add    $&_ZL14gUnicodeBuffer+0x11bc8,%edx
08654a39 +0x115:  mov    0xc(%eax,%edx,4),%eax
08654a3d +0x119:  shr    $0xf,%eax
08654a40 +0x11c:  and    $0x7,%eax
08654a43 +0x11f:  mov    %al,-0x4e(%ebp)
08654a46 +0x122:  mov    -0x10(%ebp),%edx
08654a49 +0x125:  mov    0x8(%ebp),%eax
08654a4c +0x128:  add    $&_ZL14gUnicodeBuffer+0x11bc8,%edx
08654a52 +0x12e:  movzbl 0xe(%eax,%edx,4),%eax
08654a57 +0x133:  shr    $0x2,%al
08654a5a +0x136:  and    $0x7,%eax
08654a5d +0x139:  mov    %al,-0x4d(%ebp)
08654a60 +0x13c:  movzwl -0x54(%ebp),%eax
08654a64 +0x140:  cwtl
08654a65 +0x141:  mov    %eax,-0x48(%ebp)
08654a68 +0x144:  lea    -0x58(%ebp),%eax
08654a6b +0x147:  lea    -0x48(%ebp),%edx
08654a6e +0x14a:  mov    %edx,0x8(%esp)
08654a72 +0x14e:  mov    -0x14(%ebp),%edx
08654a75 +0x151:  mov    %edx,0x4(%esp)
08654a79 +0x155:  mov    %eax,(%esp)
08654a7c +0x158:  call   0869ab5a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73af>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73af
08654a81 +0x15d:  sub    $0x4,%esp
08654a84 +0x160:  lea    -0x44(%ebp),%eax
08654a87 +0x163:  mov    -0x14(%ebp),%edx
08654a8a +0x166:  mov    %edx,0x4(%esp)
08654a8e +0x16a:  mov    %eax,(%esp)
08654a91 +0x16d:  call   0869aaf4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7349>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7349
08654a96 +0x172:  sub    $0x4,%esp
08654a99 +0x175:  lea    -0x44(%ebp),%eax
08654a9c +0x178:  mov    %eax,0x4(%esp)
08654aa0 +0x17c:  lea    -0x58(%ebp),%eax
08654aa3 +0x17f:  mov    %eax,(%esp)
08654aa6 +0x182:  call   0869ab86 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73db>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73db
08654aab +0x187:  test   %al,%al
08654aad +0x189:  je     08654afb <+0x1d7>
08654aaf +0x18b:  lea    -0x26(%ebp),%eax
08654ab2 +0x18e:  lea    -0x54(%ebp),%edx
08654ab5 +0x191:  mov    %edx,0x8(%esp)
08654ab9 +0x195:  lea    -0x54(%ebp),%edx
08654abc +0x198:  mov    %edx,0x4(%esp)
08654ac0 +0x19c:  mov    %eax,(%esp)
08654ac3 +0x19f:  call   0869ab9a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73ef
08654ac8 +0x1a4:  sub    $0x4,%esp
08654acb +0x1a7:  lea    -0x26(%ebp),%eax
08654ace +0x1aa:  mov    %eax,0x4(%esp)
08654ad2 +0x1ae:  lea    -0x38(%ebp),%eax
08654ad5 +0x1b1:  mov    %eax,(%esp)
08654ad8 +0x1b4:  call   0869abd8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x742d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x742d
08654add +0x1b9:  lea    -0x40(%ebp),%eax
08654ae0 +0x1bc:  lea    -0x38(%ebp),%edx
08654ae3 +0x1bf:  mov    %edx,0x8(%esp)
08654ae7 +0x1c3:  mov    -0x14(%ebp),%edx
08654aea +0x1c6:  mov    %edx,0x4(%esp)
08654aee +0x1ca:  mov    %eax,(%esp)
08654af1 +0x1cd:  call   0869ac18 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x746d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x746d
08654af6 +0x1d2:  sub    $0x4,%esp
08654af9 +0x1d5:  jmp    08654b58 <+0x234>
08654afb +0x1d7:  lea    -0x58(%ebp),%eax
08654afe +0x1da:  mov    %eax,(%esp)
08654b01 +0x1dd:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654b06 +0x1e2:  movzwl -0x54(%ebp),%edx
08654b0a +0x1e6:  mov    %dx,0x4(%eax)
08654b0e +0x1ea:  lea    -0x58(%ebp),%eax
08654b11 +0x1ed:  mov    %eax,(%esp)
08654b14 +0x1f0:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654b19 +0x1f5:  movzbl -0x52(%ebp),%edx
08654b1d +0x1f9:  mov    %dl,0x6(%eax)
08654b20 +0x1fc:  movl   $0x0,-0xc(%ebp)
08654b27 +0x203:  jmp    08654b47 <+0x223>
08654b29 +0x205:  lea    -0x58(%ebp),%eax
08654b2c +0x208:  mov    %eax,(%esp)
08654b2f +0x20b:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654b34 +0x210:  mov    -0xc(%ebp),%edx
08654b37 +0x213:  mov    -0xc(%ebp),%ecx
08654b3a +0x216:  movzbl -0x51(%ebp,%ecx,1),%ecx
08654b3f +0x21b:  mov    %cl,0x7(%eax,%edx,1)
08654b43 +0x21f:  addl   $0x1,-0xc(%ebp)
08654b47 +0x223:  movzbl -0x52(%ebp),%eax
08654b4b +0x227:  movsbl %al,%eax
08654b4e +0x22a:  cmp    -0xc(%ebp),%eax
08654b51 +0x22d:  setg   %al
08654b54 +0x230:  test   %al,%al
08654b56 +0x232:  jne    08654b29 <+0x205>
08654b58 +0x234:  addl   $0x1,-0x10(%ebp)
08654b5c +0x238:  cmpl   $0x31,-0x10(%ebp)
08654b60 +0x23c:  setle  %al
08654b63 +0x23f:  test   %al,%al
08654b65 +0x241:  jne    08654974 <+0x50>
08654b6b +0x247:  jmp    08654b6e <+0x24a>
08654b6d +0x249:  nop
08654b6e +0x24a:  mov    0x8(%ebp),%eax
08654b71 +0x24d:  add    $0x703db,%eax
08654b76 +0x252:  movl   $0xc8,0x8(%esp)
08654b7e +0x25a:  movl   $0x0,0x4(%esp)
08654b86 +0x262:  mov    %eax,(%esp)
08654b89 +0x265:  call   0807dcc0 <_init+0x5b8>
08654b8e +0x26a:  jmp    08654b91 <+0x26d>
08654b90 +0x26c:  nop
08654b91 +0x26d:  leave
08654b92 +0x26e:  ret
08654b93 +0x26f:  nop
```

## 反编译 C

```c
// CUser::setSkillCommandData @ 0x8654924

/* CUser::setSkillCommandData(char*) */

void __thiscall CUser::setSkillCommandData(CUser *this,char *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> local_5c [4];
  ushort local_58;
  byte local_56;
  byte local_55 [4];
  byte local_51;
  int local_4c;
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  local_48 [4];
  pair local_44 [8];
  pair<int_const,STSkillCommandData> local_3c [18];
  short local_2a [7];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 200;
  memcpy(this + 0x703db,param_1,200);
  local_18 = CUserCharacInfo::getSkillCommand((CUserCharacInfo *)this);
  if (local_18 != 0) {
    local_14 = 0;
    while ((local_14 < 0x32 &&
           (((byte)this[(local_14 + 0x1c0f4) * 4 + 0xc] & 0x3f) != 0 ||
            this[(local_14 + 0x1c0f4) * 4 + 0xb] != (CUser)0x0))) {
      STSkillCommandData::STSkillCommandData((STSkillCommandData *)&local_58);
      local_58 = ((byte)this[(local_14 + 0x1c0f4) * 4 + 0xc] & 0x3f) << 8 |
                 (ushort)(byte)this[(local_14 + 0x1c0f4) * 4 + 0xb];
      local_56 = (byte)this[(local_14 + 0x1c0f4) * 4 + 0xe] >> 5;
      local_55[0] = (byte)(*(ushort *)(this + (local_14 + 0x1c0f4) * 4 + 0xc) >> 6) & 7;
      local_55[1] = (byte)this[(local_14 + 0x1c0f4) * 4 + 0xd] >> 1 & 7;
      local_55[2] = (byte)this[(local_14 + 0x1c0f4) * 4 + 0xd] >> 4 & 7;
      local_55[3] = (byte)(*(uint *)(this + (local_14 + 0x1c0f4) * 4 + 0xc) >> 0xf) & 7;
      local_51 = (byte)this[(local_14 + 0x1c0f4) * 4 + 0xe] >> 2 & 7;
      local_4c = (int)(short)local_58;
      std::
      map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
      ::find((int *)local_5c);
      std::
      map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
      ::end(local_48);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator==
                        (local_5c,(_Rb_tree_iterator *)local_48);
      if (cVar1 == '\0') {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                          (local_5c);
        *(ushort *)(iVar2 + 4) = local_58;
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                          (local_5c);
        *(byte *)(iVar2 + 6) = local_56;
        for (local_10 = 0; local_10 < (char)local_56; local_10 = local_10 + 1) {
          iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                            (local_5c);
          *(byte *)(iVar2 + 7 + local_10) = local_55[local_10];
        }
      }
      else {
        std::make_pair<short&,STSkillCommandData&>(local_2a,(STSkillCommandData *)&local_58);
        std::pair<int_const,STSkillCommandData>::pair<short,STSkillCommandData>
                  (local_3c,(pair *)local_2a);
        std::
        map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
        ::insert(local_44);
      }
      local_14 = local_14 + 1;
    }
    memset(this + 0x703db,0,200);
  }
  return;
}
```
