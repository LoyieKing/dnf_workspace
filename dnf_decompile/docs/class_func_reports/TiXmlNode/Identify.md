# Identify

`_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding`

`TiXmlNode::Identify(char const*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e7230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e7230  _ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding
#           TiXmlNode::Identify(char const*, TiXmlEncoding)
# range [0x087e7230, 0x087e74f9]
087e7230 +0x000:  push   %ebp
087e7231 +0x001:  mov    %esp,%ebp
087e7233 +0x003:  sub    $0x28,%esp
087e7236 +0x006:  mov    %esi,-0x8(%ebp)
087e7239 +0x009:  mov    0xc(%ebp),%esi
087e723c +0x00c:  mov    %edi,-0x4(%ebp)
087e723f +0x00f:  mov    0x10(%ebp),%edi
087e7242 +0x012:  mov    %ebx,-0xc(%ebp)
087e7245 +0x015:  test   %esi,%esi
087e7247 +0x017:  jne    087e7258 <+0x28>
087e7249 +0x019:  xor    %eax,%eax
087e724b +0x01b:  mov    -0xc(%ebp),%ebx
087e724e +0x01e:  mov    -0x8(%ebp),%esi
087e7251 +0x021:  mov    -0x4(%ebp),%edi
087e7254 +0x024:  mov    %ebp,%esp
087e7256 +0x026:  pop    %ebp
087e7257 +0x027:  ret
087e7258 +0x028:  movzbl (%esi),%ebx
087e725b +0x02b:  test   %bl,%bl
087e725d +0x02d:  je     087e7249 <+0x19>
087e725f +0x02f:  cmp    $0x1,%edi
087e7262 +0x032:  je     087e733a <+0x10a>
087e7268 +0x038:  movzbl %bl,%eax
087e726b +0x03b:  mov    %eax,(%esp)
087e726e +0x03e:  call   0807e280 <_init+0xb78>
087e7273 +0x043:  cmp    $0xa,%bl
087e7276 +0x046:  je     087e7288 <+0x58>
087e7278 +0x048:  test   %eax,%eax
087e727a +0x04a:  jne    087e7288 <+0x58>
087e727c +0x04c:  cmp    $0xd,%bl
087e727f +0x04f:  nop
087e7280 +0x050:  jne    087e7358 <+0x128>
087e7286 +0x056:  xchg   %ax,%ax
087e7288 +0x058:  add    $0x1,%esi
087e728b +0x05b:  movzbl (%esi),%ebx
087e728e +0x05e:  test   %bl,%bl
087e7290 +0x060:  jne    087e7268 <+0x38>
087e7292 +0x062:  test   %esi,%esi
087e7294 +0x064:  je     087e7249 <+0x19>
087e7296 +0x066:  test   %bl,%bl
087e7298 +0x068:  je     087e7249 <+0x19>
087e729a +0x06a:  cmp    $0x3c,%bl
087e729d +0x06d:  lea    0x0(%esi),%esi
087e72a0 +0x070:  jne    087e7249 <+0x19>
087e72a2 +0x072:  mov    %edi,0x4(%esp)
087e72a6 +0x076:  mov    %esi,(%esp)
087e72a9 +0x079:  call   087e6480 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding>  ; TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding)
087e72ae +0x07e:  test   %eax,%eax
087e72b0 +0x080:  mov    %eax,%ebx
087e72b2 +0x082:  je     087e7249 <+0x19>
087e72b4 +0x084:  cmpb   $0x0,(%eax)
087e72b7 +0x087:  je     087e7249 <+0x19>
087e72b9 +0x089:  mov    %edi,0xc(%esp)
087e72bd +0x08d:  movl   $0x1,0x8(%esp)
087e72c5 +0x095:  movl   $"<?xml",0x4(%esp)
087e72cd +0x09d:  mov    %eax,(%esp)
087e72d0 +0x0a0:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e72d5 +0x0a5:  test   %al,%al
087e72d7 +0x0a7:  je     087e7392 <+0x162>
087e72dd +0x0ad:  movl   $0x38,(%esp)
087e72e4 +0x0b4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e72e9 +0x0b9:  movl   $0x5,0x4(%esp)
087e72f1 +0x0c1:  mov    %eax,%ebx
087e72f3 +0x0c3:  mov    %eax,(%esp)
087e72f6 +0x0c6:  call   087dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>  ; TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
087e72fb +0x0cb:  movl   $&_ZTV16TiXmlDeclaration+0x8,(%ebx)
087e7301 +0x0d1:  mov    %ebx,%eax
087e7303 +0x0d3:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x2c(%ebx)
087e730a +0x0da:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x30(%ebx)
087e7311 +0x0e1:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%ebx)
087e7318 +0x0e8:  test   %eax,%eax
087e731a +0x0ea:  je     087e724b <+0x1b>
087e7320 +0x0f0:  mov    0x8(%ebp),%edx
087e7323 +0x0f3:  mov    %edx,0x10(%eax)
087e7326 +0x0f6:  jmp    087e724b <+0x1b>
087e732b +0x0fb:  nop
087e732c +0x0fc:  lea    0x0(%esi,%eiz,1),%esi
087e7330 +0x100:  add    $0x1,%esi
087e7333 +0x103:  movzbl (%esi),%ebx
087e7336 +0x106:  test   %bl,%bl
087e7338 +0x108:  je     087e7358 <+0x128>
087e733a +0x10a:  cmpb   $0xef,(%esi)
087e733d +0x10d:  je     087e7368 <+0x138>
087e733f +0x10f:  movzbl %bl,%eax
087e7342 +0x112:  mov    %eax,(%esp)
087e7345 +0x115:  call   0807e280 <_init+0xb78>
087e734a +0x11a:  test   %eax,%eax
087e734c +0x11c:  jne    087e7330 <+0x100>
087e734e +0x11e:  cmp    $0xa,%bl
087e7351 +0x121:  je     087e7330 <+0x100>
087e7353 +0x123:  cmp    $0xd,%bl
087e7356 +0x126:  je     087e7330 <+0x100>
087e7358 +0x128:  test   %esi,%esi
087e735a +0x12a:  jne    087e7296 <+0x66>
087e7360 +0x130:  jmp    087e7249 <+0x19>
087e7365 +0x135:  lea    0x0(%esi),%esi
087e7368 +0x138:  movzbl 0x1(%esi),%eax
087e736c +0x13c:  cmp    $0xbb,%al
087e736e +0x13e:  xchg   %ax,%ax
087e7370 +0x140:  je     087e7388 <+0x158>
087e7372 +0x142:  cmp    $0xbf,%al
087e7374 +0x144:  jne    087e733f <+0x10f>
087e7376 +0x146:  movzbl 0x2(%esi),%eax
087e737a +0x14a:  cmp    $0xbe,%al
087e737c +0x14c:  je     087e7382 <+0x152>
087e737e +0x14e:  cmp    $0xbf,%al
087e7380 +0x150:  jne    087e733f <+0x10f>
087e7382 +0x152:  add    $0x3,%esi
087e7385 +0x155:  jmp    087e7333 <+0x103>
087e7387 +0x157:  nop
087e7388 +0x158:  cmpb   $0xbf,0x2(%esi)
087e738c +0x15c:  jne    087e733f <+0x10f>
087e738e +0x15e:  xchg   %ax,%ax
087e7390 +0x160:  jmp    087e7382 <+0x152>
087e7392 +0x162:  mov    %edi,0xc(%esp)
087e7396 +0x166:  movl   $0x0,0x8(%esp)
087e739e +0x16e:  movl   $"<!--",0x4(%esp)
087e73a6 +0x176:  mov    %ebx,(%esp)
087e73a9 +0x179:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e73ae +0x17e:  test   %al,%al
087e73b0 +0x180:  je     087e73f1 <+0x1c1>
087e73b2 +0x182:  movl   $0x2c,(%esp)
087e73b9 +0x189:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e73be +0x18e:  movl   $0x2,0x4(%esp)
087e73c6 +0x196:  mov    %eax,%ebx
087e73c8 +0x198:  mov    %eax,(%esp)
087e73cb +0x19b:  call   087dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>  ; TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
087e73d0 +0x1a0:  movl   $&_ZTV12TiXmlComment+0x8,(%ebx)
087e73d6 +0x1a6:  mov    %ebx,%eax
087e73d8 +0x1a8:  jmp    087e7318 <+0xe8>
087e73dd +0x1ad:  mov    %eax,%esi
087e73df +0x1af:  mov    %ebx,(%esp)
087e73e2 +0x1b2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087e73e7 +0x1b7:  mov    %esi,(%esp)
087e73ea +0x1ba:  call   08ae3750 <_Unwind_Resume>
087e73ef +0x1bf:  jmp    087e73dd <+0x1ad>
087e73f1 +0x1c1:  mov    %edi,0xc(%esp)
087e73f5 +0x1c5:  movl   $0x0,0x8(%esp)
087e73fd +0x1cd:  movl   $"<![CDATA[",0x4(%esp)
087e7405 +0x1d5:  mov    %ebx,(%esp)
087e7408 +0x1d8:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e740d +0x1dd:  test   %al,%al
087e740f +0x1df:  je     087e742f <+0x1ff>
087e7411 +0x1e1:  movl   $0x30,(%esp)
087e7418 +0x1e8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e741d +0x1ed:  mov    %eax,%ebx
087e741f +0x1ef:  call   087e6bd0 <_ZN9TiXmlTextC2EPKc.clone.0>  ; TiXmlText::TiXmlText(char const*) [clone .clone.0]
087e7424 +0x1f4:  movb   $0x1,0x2c(%ebx)
087e7428 +0x1f8:  mov    %ebx,%eax
087e742a +0x1fa:  jmp    087e7318 <+0xe8>
087e742f +0x1ff:  mov    %edi,0xc(%esp)
087e7433 +0x203:  movl   $0x0,0x8(%esp)
087e743b +0x20b:  movl   $"<!",0x4(%esp)
087e7443 +0x213:  mov    %ebx,(%esp)
087e7446 +0x216:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e744b +0x21b:  test   %al,%al
087e744d +0x21d:  je     087e7485 <+0x255>
087e744f +0x21f:  movl   $0x2c,(%esp)
087e7456 +0x226:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e745b +0x22b:  movl   $0x3,0x4(%esp)
087e7463 +0x233:  mov    %eax,%ebx
087e7465 +0x235:  mov    %eax,(%esp)
087e7468 +0x238:  call   087dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>  ; TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
087e746d +0x23d:  movl   $&_ZTV12TiXmlUnknown+0x8,(%ebx)
087e7473 +0x243:  mov    %ebx,%eax
087e7475 +0x245:  jmp    087e7318 <+0xe8>
087e747a +0x24a:  jmp    087e73dd <+0x1ad>
087e747f +0x24f:  nop
087e7480 +0x250:  jmp    087e73dd <+0x1ad>
087e7485 +0x255:  movzbl 0x1(%ebx),%ebx
087e7489 +0x259:  mov    %edi,0x4(%esp)
087e748d +0x25d:  movzbl %bl,%eax
087e7490 +0x260:  mov    %eax,(%esp)
087e7493 +0x263:  call   087e6260 <_ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding>  ; TiXmlBase::IsAlpha(unsigned char, TiXmlEncoding)
087e7498 +0x268:  test   %eax,%eax
087e749a +0x26a:  jne    087e74cc <+0x29c>
087e749c +0x26c:  cmp    $0x5f,%bl
087e749f +0x26f:  je     087e74cc <+0x29c>
087e74a1 +0x271:  movl   $0x2c,(%esp)
087e74a8 +0x278:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e74ad +0x27d:  movl   $0x3,0x4(%esp)
087e74b5 +0x285:  mov    %eax,%ebx
087e74b7 +0x287:  mov    %eax,(%esp)
087e74ba +0x28a:  call   087dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>  ; TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
087e74bf +0x28f:  movl   $&_ZTV12TiXmlUnknown+0x8,(%ebx)
087e74c5 +0x295:  mov    %ebx,%eax
087e74c7 +0x297:  jmp    087e7318 <+0xe8>
087e74cc +0x29c:  movl   $0x50,(%esp)
087e74d3 +0x2a3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e74d8 +0x2a8:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e74e0 +0x2b0:  mov    %eax,%ebx
087e74e2 +0x2b2:  mov    %eax,(%esp)
087e74e5 +0x2b5:  call   087e3640 <_ZN12TiXmlElementC1EPKc>  ; TiXmlElement::TiXmlElement(char const*)
087e74ea +0x2ba:  jmp    087e74c5 <+0x295>
087e74ec +0x2bc:  jmp    087e73dd <+0x1ad>
087e74f1 +0x2c1:  jmp    087e73dd <+0x1ad>
087e74f6 +0x2c6:  lea    0x0(%esi),%esi
087e74f9 +0x2c9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlNode::Identify @ 0x87e7230

/* TiXmlNode::Identify(char const*, TiXmlEncoding) */

TiXmlNode * __thiscall TiXmlNode::Identify(TiXmlNode *this,byte *param_1,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  TiXmlNode *this_00;
  byte bVar4;
  TiXmlText *this_01;
  char *pcVar5;
  
  if ((param_1 != (byte *)0x0) && (bVar4 = *param_1, bVar4 != 0)) {
    if (param_3 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e7382;
            goto LAB_087e733f;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e733f;
LAB_087e7382:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e733f:
          iVar2 = isspace((uint)bVar4);
          if (((iVar2 == 0) && (bVar4 != 10)) && (bVar4 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar4 = *param_1;
      } while (bVar4 != 0);
    }
    else {
      do {
        iVar2 = isspace((uint)bVar4);
        if (((bVar4 != 10) && (iVar2 == 0)) && (bVar4 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar4 = *param_1;
      } while (bVar4 != 0);
    }
    if (((param_1 != (byte *)0x0) && (bVar4 != 0)) &&
       ((bVar4 == 0x3c &&
        ((pcVar3 = (char *)TiXmlBase::SkipWhiteSpace(param_1,param_3), pcVar3 != (char *)0x0 &&
         (*pcVar3 != '\0')))))) {
      cVar1 = TiXmlBase::StringEqual(pcVar3,"<?xml",1,param_3);
      if (cVar1 == '\0') {
        cVar1 = TiXmlBase::StringEqual(pcVar3,&DAT_08d0cfd6,0,param_3);
        if (cVar1 == '\0') {
          pcVar5 = "<![CDATA[";
          cVar1 = TiXmlBase::StringEqual(pcVar3,&DAT_08d0cfdb,0,param_3);
          if (cVar1 == '\0') {
            cVar1 = TiXmlBase::StringEqual(pcVar3,&DAT_08de187d,0,param_3);
            if (cVar1 == '\0') {
              cVar1 = pcVar3[1];
              iVar2 = TiXmlBase::IsAlpha(cVar1,param_3);
              if ((iVar2 == 0) && (cVar1 != '_')) {
                this_00 = operator_new(0x2c);
                    /* try { // try from 087e74ba to 087e74be has its CatchHandler @ 087e74ec */
                TiXmlNode(this_00,3);
                *(undefined ***)this_00 = &PTR__TiXmlUnknown_08de10a8;
              }
              else {
                this_00 = operator_new(0x50);
                    /* try { // try from 087e74e5 to 087e74e9 has its CatchHandler @ 087e74f1 */
                TiXmlElement::TiXmlElement((TiXmlElement *)this_00,"");
              }
            }
            else {
              this_00 = operator_new(0x2c);
                    /* try { // try from 087e7468 to 087e746c has its CatchHandler @ 087e747f */
              TiXmlNode(this_00,3);
              *(undefined ***)this_00 = &PTR__TiXmlUnknown_08de10a8;
            }
          }
          else {
            this_01 = (TiXmlText *)0x30;
            this_00 = operator_new(0x30);
                    /* try { // try from 087e741f to 087e7423 has its CatchHandler @ 087e747a */
            TiXmlText::TiXmlText(this_01,pcVar5);
            this_00[0x2c] = (TiXmlNode)0x1;
          }
        }
        else {
          this_00 = operator_new(0x2c);
                    /* try { // try from 087e73cb to 087e73cf has its CatchHandler @ 087e73ef */
          TiXmlNode(this_00,2);
          *(undefined ***)this_00 = &PTR__TiXmlComment_08de11c8;
        }
      }
      else {
        this_00 = operator_new(0x38);
                    /* try { // try from 087e72f6 to 087e72fa has its CatchHandler @ 087e73dd */
        TiXmlNode(this_00,5);
        *(undefined ***)this_00 = &PTR__TiXmlDeclaration_08de1108;
        *(undefined1 **)(this_00 + 0x2c) = &DAT_0948ccfc;
        *(undefined1 **)(this_00 + 0x30) = &DAT_0948ccfc;
        *(undefined1 **)(this_00 + 0x34) = &DAT_0948ccfc;
      }
      if (this_00 == (TiXmlNode *)0x0) {
        return (TiXmlNode *)0x0;
      }
      *(TiXmlNode **)(this_00 + 0x10) = this;
      return this_00;
    }
  }
  return (TiXmlNode *)0x0;
}
```
