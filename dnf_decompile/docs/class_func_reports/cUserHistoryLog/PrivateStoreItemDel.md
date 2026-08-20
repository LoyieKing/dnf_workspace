# PrivateStoreItemDel

`_ZN15cUserHistoryLog19PrivateStoreItemDelE10INVEN_TYPERK10Inven_Itemii14eItemDelReasonPKcS6_`

`cUserHistoryLog::PrivateStoreItemDel(INVEN_TYPE, Inven_Item const&, int, int, eItemDelReason, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868412a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868412a  _ZN15cUserHistoryLog19PrivateStoreItemDelE10INVEN_TYPERK10Inven_Itemii14eItemDelReasonPKcS6_
#           cUserHistoryLog::PrivateStoreItemDel(INVEN_TYPE, Inven_Item const&, int, int, eItemDelReason, char const*, char const*)
# range [0x0868412a, 0x0868433d]
0868412a +0x000:  push   %ebp
0868412b +0x001:  mov    %esp,%ebp
0868412d +0x003:  push   %edi
0868412e +0x004:  push   %esi
0868412f +0x005:  push   %ebx
08684130 +0x006:  sub    $0xec,%esp
08684136 +0x00c:  mov    0x10(%ebp),%eax
08684139 +0x00f:  lea    0x15(%eax),%ebx
0868413c +0x012:  lea    -0x2d(%ebp),%eax
0868413f +0x015:  mov    %eax,(%esp)
08684142 +0x018:  call   084ebe58 <_GLOBAL__I__Z7getUserj+0x2e0a>  ; global constructors keyed to getUser(unsigned int)+0x2e0a
08684147 +0x01d:  mov    %ebx,0x4(%esp)
0868414b +0x021:  lea    -0x2d(%ebp),%eax
0868414e +0x024:  mov    %eax,(%esp)
08684151 +0x027:  call   084ebe82 <_GLOBAL__I__Z7getUserj+0x2e34>  ; global constructors keyed to getUser(unsigned int)+0x2e34
08684156 +0x02c:  mov    %eax,-0x80(%ebp)
08684159 +0x02f:  mov    0x10(%ebp),%eax
0868415c +0x032:  mov    %eax,(%esp)
0868415f +0x035:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08684164 +0x03a:  movzbl %al,%eax
08684167 +0x03d:  mov    %eax,-0x7c(%ebp)
0868416a +0x040:  mov    0x10(%ebp),%eax
0868416d +0x043:  movzbl (%eax),%eax
08684170 +0x046:  movzbl %al,%eax
08684173 +0x049:  mov    %eax,-0x78(%ebp)
08684176 +0x04c:  mov    0x10(%ebp),%eax
08684179 +0x04f:  movzbl 0x32(%eax),%eax
0868417d +0x053:  movzbl %al,%eax
08684180 +0x056:  mov    %eax,-0x74(%ebp)
08684183 +0x059:  mov    0x10(%ebp),%eax
08684186 +0x05c:  movzbl 0x31(%eax),%eax
0868418a +0x060:  movzbl %al,%eax
0868418d +0x063:  mov    %eax,-0x70(%ebp)
08684190 +0x066:  mov    0x10(%ebp),%eax
08684193 +0x069:  movzbl 0x30(%eax),%eax
08684197 +0x06d:  movzbl %al,%eax
0868419a +0x070:  mov    %eax,-0x6c(%ebp)
0868419d +0x073:  mov    0x10(%ebp),%eax
086841a0 +0x076:  movzbl 0x2f(%eax),%eax
086841a4 +0x07a:  movzbl %al,%eax
086841a7 +0x07d:  mov    %eax,-0x68(%ebp)
086841aa +0x080:  mov    0x10(%ebp),%eax
086841ad +0x083:  movzbl 0x2e(%eax),%eax
086841b1 +0x087:  movzbl %al,%eax
086841b4 +0x08a:  mov    %eax,-0x64(%ebp)
086841b7 +0x08d:  mov    0x10(%ebp),%eax
086841ba +0x090:  movzbl 0x2d(%eax),%eax
086841be +0x094:  movzbl %al,%eax
086841c1 +0x097:  mov    %eax,-0x60(%ebp)
086841c4 +0x09a:  mov    0x10(%ebp),%eax
086841c7 +0x09d:  movzbl 0x2c(%eax),%eax
086841cb +0x0a1:  movzbl %al,%eax
086841ce +0x0a4:  mov    %eax,-0x5c(%ebp)
086841d1 +0x0a7:  mov    0x10(%ebp),%eax
086841d4 +0x0aa:  movzbl 0x2b(%eax),%eax
086841d8 +0x0ae:  movzbl %al,%eax
086841db +0x0b1:  mov    %eax,-0x58(%ebp)
086841de +0x0b4:  mov    0x10(%ebp),%eax
086841e1 +0x0b7:  movzbl 0x2a(%eax),%eax
086841e5 +0x0bb:  movzbl %al,%eax
086841e8 +0x0be:  mov    %eax,-0x54(%ebp)
086841eb +0x0c1:  mov    0x10(%ebp),%eax
086841ee +0x0c4:  movzbl 0x29(%eax),%eax
086841f2 +0x0c8:  movzbl %al,%eax
086841f5 +0x0cb:  mov    %eax,-0x50(%ebp)
086841f8 +0x0ce:  mov    0x10(%ebp),%eax
086841fb +0x0d1:  movzbl 0x28(%eax),%eax
086841ff +0x0d5:  movzbl %al,%eax
08684202 +0x0d8:  mov    %eax,-0x4c(%ebp)
08684205 +0x0db:  mov    0x10(%ebp),%eax
08684208 +0x0de:  movzbl 0x27(%eax),%eax
0868420c +0x0e2:  movzbl %al,%eax
0868420f +0x0e5:  mov    %eax,-0x48(%ebp)
08684212 +0x0e8:  mov    0x10(%ebp),%eax
08684215 +0x0eb:  movzbl 0x26(%eax),%eax
08684219 +0x0ef:  movzbl %al,%eax
0868421c +0x0f2:  mov    %eax,-0x44(%ebp)
0868421f +0x0f5:  mov    0x10(%ebp),%eax
08684222 +0x0f8:  movzbl 0x25(%eax),%eax
08684226 +0x0fc:  movzbl %al,%eax
08684229 +0x0ff:  mov    %eax,-0x40(%ebp)
0868422c +0x102:  mov    0x10(%ebp),%eax
0868422f +0x105:  movzwl 0xb(%eax),%eax
08684233 +0x109:  movzwl %ax,%eax
08684236 +0x10c:  mov    %eax,-0x3c(%ebp)
08684239 +0x10f:  mov    0x10(%ebp),%eax
0868423c +0x112:  mov    %eax,(%esp)
0868423f +0x115:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08684244 +0x11a:  movzbl %al,%edi
08684247 +0x11d:  mov    0x1c(%ebp),%esi
0868424a +0x120:  mov    0x10(%ebp),%eax
0868424d +0x123:  mov    0x2(%eax),%ebx
08684250 +0x126:  mov    0xc(%ebp),%ecx
08684253 +0x129:  mov    0x8(%ebp),%eax
08684256 +0x12c:  mov    (%eax),%edx
08684258 +0x12e:  mov    -0x80(%ebp),%eax
0868425b +0x131:  mov    %eax,0x68(%esp)
0868425f +0x135:  mov    -0x7c(%ebp),%eax
08684262 +0x138:  mov    %eax,0x64(%esp)
08684266 +0x13c:  mov    -0x78(%ebp),%eax
08684269 +0x13f:  mov    %eax,0x60(%esp)
0868426d +0x143:  mov    -0x74(%ebp),%eax
08684270 +0x146:  mov    %eax,0x5c(%esp)
08684274 +0x14a:  mov    -0x70(%ebp),%eax
08684277 +0x14d:  mov    %eax,0x58(%esp)
0868427b +0x151:  mov    -0x6c(%ebp),%eax
0868427e +0x154:  mov    %eax,0x54(%esp)
08684282 +0x158:  mov    -0x68(%ebp),%eax
08684285 +0x15b:  mov    %eax,0x50(%esp)
08684289 +0x15f:  mov    -0x64(%ebp),%eax
0868428c +0x162:  mov    %eax,0x4c(%esp)
08684290 +0x166:  mov    -0x60(%ebp),%eax
08684293 +0x169:  mov    %eax,0x48(%esp)
08684297 +0x16d:  mov    -0x5c(%ebp),%eax
0868429a +0x170:  mov    %eax,0x44(%esp)
0868429e +0x174:  mov    -0x58(%ebp),%eax
086842a1 +0x177:  mov    %eax,0x40(%esp)
086842a5 +0x17b:  mov    -0x54(%ebp),%eax
086842a8 +0x17e:  mov    %eax,0x3c(%esp)
086842ac +0x182:  mov    -0x50(%ebp),%eax
086842af +0x185:  mov    %eax,0x38(%esp)
086842b3 +0x189:  mov    -0x4c(%ebp),%eax
086842b6 +0x18c:  mov    %eax,0x34(%esp)
086842ba +0x190:  mov    -0x48(%ebp),%eax
086842bd +0x193:  mov    %eax,0x30(%esp)
086842c1 +0x197:  mov    -0x44(%ebp),%eax
086842c4 +0x19a:  mov    %eax,0x2c(%esp)
086842c8 +0x19e:  mov    -0x40(%ebp),%eax
086842cb +0x1a1:  mov    %eax,0x28(%esp)
086842cf +0x1a5:  mov    -0x3c(%ebp),%eax
086842d2 +0x1a8:  mov    %eax,0x24(%esp)
086842d6 +0x1ac:  mov    %edi,0x20(%esp)
086842da +0x1b0:  mov    0x24(%ebp),%eax
086842dd +0x1b3:  mov    %eax,0x1c(%esp)
086842e1 +0x1b7:  mov    %esi,0x18(%esp)
086842e5 +0x1bb:  mov    0x18(%ebp),%eax
086842e8 +0x1be:  mov    %eax,0x14(%esp)
086842ec +0x1c2:  mov    0x14(%ebp),%eax
086842ef +0x1c5:  mov    %eax,0x10(%esp)
086842f3 +0x1c9:  mov    %ebx,0xc(%esp)
086842f7 +0x1cd:  mov    %ecx,0x8(%esp)
086842fb +0x1d1:  movl   $"Item-,%d,%d,%d,%d,%d,\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s",0x4(%esp)
08684303 +0x1d9:  mov    %edx,(%esp)
08684306 +0x1dc:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868430b +0x1e1:  jmp    08684328 <+0x1fe>
0868430d +0x1e3:  mov    %edx,%ebx
0868430f +0x1e5:  mov    %eax,%esi
08684311 +0x1e7:  lea    -0x2d(%ebp),%eax
08684314 +0x1ea:  mov    %eax,(%esp)
08684317 +0x1ed:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
0868431c +0x1f2:  mov    %esi,%eax
0868431e +0x1f4:  mov    %ebx,%edx
08684320 +0x1f6:  mov    %eax,(%esp)
08684323 +0x1f9:  call   08ae3750 <_Unwind_Resume>
08684328 +0x1fe:  lea    -0x2d(%ebp),%eax
0868432b +0x201:  mov    %eax,(%esp)
0868432e +0x204:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
08684333 +0x209:  add    $0xec,%esp
08684339 +0x20f:  pop    %ebx
0868433a +0x210:  pop    %esi
0868433b +0x211:  pop    %edi
0868433c +0x212:  pop    %ebp
0868433d +0x213:  ret
```

## 反编译 C

```c
// cUserHistoryLog::PrivateStoreItemDel @ 0x868412a

/* cUserHistoryLog::PrivateStoreItemDel(INVEN_TYPE, Inven_Item const&, int, int, eItemDelReason,
   char const*, char const*) */

void __thiscall
cUserHistoryLog::PrivateStoreItemDel
          (cUserHistoryLog *this,undefined4 param_2,Inven_Item *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  Inven_Item IVar4;
  Inven_Item IVar5;
  Inven_Item IVar6;
  Inven_Item IVar7;
  Inven_Item IVar8;
  Inven_Item IVar9;
  Inven_Item IVar10;
  Inven_Item IVar11;
  Inven_Item IVar12;
  Inven_Item IVar13;
  Inven_Item IVar14;
  Inven_Item IVar15;
  ushort uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  CItemGloballyUniqueIdentifierPrint local_31 [33];
  
  CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_31);
                    /* try { // try from 08684151 to 0868430a has its CatchHandler @ 0868430d */
  uVar17 = CItemGloballyUniqueIdentifierPrint::operator()
                     (local_31,(itemGloballyUniqueIdentifier_t *)(param_3 + 0x15));
  uVar18 = Inven_Item::GetReSealCount(param_3);
  IVar1 = *param_3;
  IVar2 = param_3[0x32];
  IVar3 = param_3[0x31];
  IVar4 = param_3[0x30];
  IVar5 = param_3[0x2f];
  IVar6 = param_3[0x2e];
  IVar7 = param_3[0x2d];
  IVar8 = param_3[0x2c];
  IVar9 = param_3[0x2b];
  IVar10 = param_3[0x2a];
  IVar11 = param_3[0x29];
  IVar12 = param_3[0x28];
  IVar13 = param_3[0x27];
  IVar14 = param_3[0x26];
  IVar15 = param_3[0x25];
  uVar16 = *(ushort *)(param_3 + 0xb);
  uVar19 = Inven_Item::GetUpgrade(param_3);
  CUser::LogHistory(*(CUser **)this,
                    "Item-,%d,%d,%d,%d,%d,\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                    ,param_2,*(undefined4 *)(param_3 + 2),param_4,param_5,param_6,param_8,
                    uVar19 & 0xff,(uint)uVar16,(uint)(byte)IVar15,(uint)(byte)IVar14,
                    (uint)(byte)IVar13,(uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,
                    (uint)(byte)IVar9,(uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,
                    (uint)(byte)IVar5,(uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,
                    (uint)(byte)IVar1,uVar18 & 0xff,uVar17);
  CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_31);
  return;
}
```
