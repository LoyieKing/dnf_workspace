# CharsetInit

`_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode`

`np_server_xml::CServerXml::CharsetInit(TiXmlNode*)`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c5e0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c5e0e  _ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode
#           np_server_xml::CServerXml::CharsetInit(TiXmlNode*)
# range [0x080c5e0e, 0x080c5fad]
080c5e0e +0x000:  push   %ebp
080c5e0f +0x001:  mov    %esp,%ebp
080c5e11 +0x003:  sub    $0x28,%esp
080c5e14 +0x006:  movl   $0x0,-0x10(%ebp)
080c5e1b +0x00d:  movl   $0x0,-0xc(%ebp)
080c5e22 +0x014:  movl   $"option",0x4(%esp)
080c5e2a +0x01c:  mov    0xc(%ebp),%eax
080c5e2d +0x01f:  mov    %eax,(%esp)
080c5e30 +0x022:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c5e35 +0x027:  mov    %eax,-0xc(%ebp)
080c5e38 +0x02a:  cmpl   $0x0,-0xc(%ebp)
080c5e3c +0x02e:  jne    080c5e56 <+0x48>
080c5e3e +0x030:  movl   $"[CServerXml] <option> Tag Error",(%esp)
080c5e45 +0x037:  call   0807e570 <_init+0xe68>
080c5e4a +0x03c:  movl   $0xffffffff,(%esp)
080c5e51 +0x043:  call   0807e1c0 <_init+0xab8>
080c5e56 +0x048:  movl   $"charset",0x4(%esp)
080c5e5e +0x050:  mov    -0xc(%ebp),%eax
080c5e61 +0x053:  mov    %eax,(%esp)
080c5e64 +0x056:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c5e69 +0x05b:  mov    %eax,-0xc(%ebp)
080c5e6c +0x05e:  cmpl   $0x0,-0xc(%ebp)
080c5e70 +0x062:  jne    080c5e8a <+0x7c>
080c5e72 +0x064:  movl   $"[CServerXml] <charset> Tag Error",(%esp)
080c5e79 +0x06b:  call   0807e570 <_init+0xe68>
080c5e7e +0x070:  movl   $0xffffffff,(%esp)
080c5e85 +0x077:  call   0807e1c0 <_init+0xab8>
080c5e8a +0x07c:  mov    -0xc(%ebp),%eax
080c5e8d +0x07f:  mov    (%eax),%eax
080c5e8f +0x081:  add    $0x2c,%eax
080c5e92 +0x084:  mov    (%eax),%edx
080c5e94 +0x086:  mov    -0xc(%ebp),%eax
080c5e97 +0x089:  mov    %eax,(%esp)
080c5e9a +0x08c:  call   *%edx
080c5e9c +0x08e:  movl   $"type",0x4(%esp)
080c5ea4 +0x096:  mov    %eax,(%esp)
080c5ea7 +0x099:  call   087e11e0 <_ZNK12TiXmlElement9AttributeEPKc>  ; TiXmlElement::Attribute(char const*) const
080c5eac +0x09e:  mov    %eax,-0x10(%ebp)
080c5eaf +0x0a1:  cmpl   $0x0,-0x10(%ebp)
080c5eb3 +0x0a5:  jne    080c5ecd <+0xbf>
080c5eb5 +0x0a7:  movl   $"[CServerXml] <type> Tag Error",(%esp)
080c5ebc +0x0ae:  call   0807e570 <_init+0xe68>
080c5ec1 +0x0b3:  movl   $0xffffffff,(%esp)
080c5ec8 +0x0ba:  call   0807e1c0 <_init+0xab8>
080c5ecd +0x0bf:  movl   $"kor",0x4(%esp)
080c5ed5 +0x0c7:  mov    -0x10(%ebp),%eax
080c5ed8 +0x0ca:  mov    %eax,(%esp)
080c5edb +0x0cd:  call   0807e4e0 <_init+0xdd8>
080c5ee0 +0x0d2:  test   %eax,%eax
080c5ee2 +0x0d4:  jne    080c5ef3 <+0xe5>
080c5ee4 +0x0d6:  mov    0x8(%ebp),%eax
080c5ee7 +0x0d9:  movl   $0x0,0x50(%eax)
080c5eee +0x0e0:  jmp    080c5f9a <+0x18c>
080c5ef3 +0x0e5:  movl   $"chn",0x4(%esp)
080c5efb +0x0ed:  mov    -0x10(%ebp),%eax
080c5efe +0x0f0:  mov    %eax,(%esp)
080c5f01 +0x0f3:  call   0807e4e0 <_init+0xdd8>
080c5f06 +0x0f8:  test   %eax,%eax
080c5f08 +0x0fa:  jne    080c5f19 <+0x10b>
080c5f0a +0x0fc:  mov    0x8(%ebp),%eax
080c5f0d +0x0ff:  movl   $0x1,0x50(%eax)
080c5f14 +0x106:  jmp    080c5f9a <+0x18c>
080c5f19 +0x10b:  movl   $"jpn",0x4(%esp)
080c5f21 +0x113:  mov    -0x10(%ebp),%eax
080c5f24 +0x116:  mov    %eax,(%esp)
080c5f27 +0x119:  call   0807e4e0 <_init+0xdd8>
080c5f2c +0x11e:  test   %eax,%eax
080c5f2e +0x120:  jne    080c5f3c <+0x12e>
080c5f30 +0x122:  mov    0x8(%ebp),%eax
080c5f33 +0x125:  movl   $0x2,0x50(%eax)
080c5f3a +0x12c:  jmp    080c5f9a <+0x18c>
080c5f3c +0x12e:  movl   $"usa",0x4(%esp)
080c5f44 +0x136:  mov    -0x10(%ebp),%eax
080c5f47 +0x139:  mov    %eax,(%esp)
080c5f4a +0x13c:  call   0807e4e0 <_init+0xdd8>
080c5f4f +0x141:  test   %eax,%eax
080c5f51 +0x143:  jne    080c5f5f <+0x151>
080c5f53 +0x145:  mov    0x8(%ebp),%eax
080c5f56 +0x148:  movl   $0x3,0x50(%eax)
080c5f5d +0x14f:  jmp    080c5f9a <+0x18c>
080c5f5f +0x151:  movl   $"twn",0x4(%esp)
080c5f67 +0x159:  mov    -0x10(%ebp),%eax
080c5f6a +0x15c:  mov    %eax,(%esp)
080c5f6d +0x15f:  call   0807e4e0 <_init+0xdd8>
080c5f72 +0x164:  test   %eax,%eax
080c5f74 +0x166:  jne    080c5f82 <+0x174>
080c5f76 +0x168:  mov    0x8(%ebp),%eax
080c5f79 +0x16b:  movl   $0x4,0x50(%eax)
080c5f80 +0x172:  jmp    080c5f9a <+0x18c>
080c5f82 +0x174:  movl   $"[CServerXml] <type> Tag Error",(%esp)
080c5f89 +0x17b:  call   0807e570 <_init+0xe68>
080c5f8e +0x180:  movl   $0xffffffff,(%esp)
080c5f95 +0x187:  call   0807e1c0 <_init+0xab8>
080c5f9a +0x18c:  mov    0x8(%ebp),%eax
080c5f9d +0x18f:  mov    -0x10(%ebp),%edx
080c5fa0 +0x192:  mov    %edx,0x4(%esp)
080c5fa4 +0x196:  mov    %eax,(%esp)
080c5fa7 +0x199:  call   0807def0 <_init+0x7e8>
080c5fac +0x19e:  leave
080c5fad +0x19f:  ret
```

## 反编译 C

```c
// np_server_xml::CServerXml::CharsetInit @ 0x80c5e0e

/* np_server_xml::CServerXml::CharsetInit(TiXmlNode*) */

void __thiscall np_server_xml::CServerXml::CharsetInit(CServerXml *this,TiXmlNode *param_1)

{
  TiXmlNode *this_00;
  int *piVar1;
  TiXmlElement *this_01;
  char *__s1;
  int iVar2;
  
  this_00 = (TiXmlNode *)TiXmlNode::FirstChild(param_1,"option");
  if (this_00 == (TiXmlNode *)0x0) {
    puts("[CServerXml] <option> Tag Error");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  piVar1 = (int *)TiXmlNode::FirstChild(this_00,"charset");
  if (piVar1 == (int *)0x0) {
    puts("[CServerXml] <charset> Tag Error");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  this_01 = (TiXmlElement *)(**(code **)(*piVar1 + 0x2c))(piVar1);
  __s1 = (char *)TiXmlElement::Attribute(this_01,"type");
  if (__s1 == (char *)0x0) {
    puts("[CServerXml] <type> Tag Error");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  iVar2 = strcmp(__s1,"kor");
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  else {
    iVar2 = strcmp(__s1,"chn");
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x50) = 1;
    }
    else {
      iVar2 = strcmp(__s1,"jpn");
      if (iVar2 == 0) {
        *(undefined4 *)(this + 0x50) = 2;
      }
      else {
        iVar2 = strcmp(__s1,"usa");
        if (iVar2 == 0) {
          *(undefined4 *)(this + 0x50) = 3;
        }
        else {
          iVar2 = strcmp(__s1,"twn");
          if (iVar2 != 0) {
            puts("[CServerXml] <type> Tag Error");
                    /* WARNING: Subroutine does not return */
            exit(-1);
          }
          *(undefined4 *)(this + 0x50) = 4;
        }
      }
    }
  }
  strcpy((char *)this,__s1);
  return;
}
```
