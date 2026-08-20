# EventLoad

`_ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode`

`np_server_xml::CServerXml::EventLoad(TiXmlNode*)`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c5fae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c5fae  _ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode
#           np_server_xml::CServerXml::EventLoad(TiXmlNode*)
# range [0x080c5fae, 0x080c6163]
080c5fae +0x000:  push   %ebp
080c5faf +0x001:  mov    %esp,%ebp
080c5fb1 +0x003:  sub    $0x38,%esp
080c5fb4 +0x006:  movl   $0x0,-0x18(%ebp)
080c5fbb +0x00d:  movl   $"event_str",0x4(%esp)
080c5fc3 +0x015:  mov    0xc(%ebp),%eax
080c5fc6 +0x018:  mov    %eax,(%esp)
080c5fc9 +0x01b:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c5fce +0x020:  mov    %eax,-0x18(%ebp)
080c5fd1 +0x023:  cmpl   $0x0,-0x18(%ebp)
080c5fd5 +0x027:  jne    080c5fe8 <+0x3a>
080c5fd7 +0x029:  movl   $"[CServerXml] <event_str> Tag Skip!!",(%esp)
080c5fde +0x030:  call   0807e570 <_init+0xe68>
080c5fe3 +0x035:  jmp    080c6161 <+0x1b3>
080c5fe8 +0x03a:  movl   $"event",0x4(%esp)
080c5ff0 +0x042:  mov    -0x18(%ebp),%eax
080c5ff3 +0x045:  mov    %eax,(%esp)
080c5ff6 +0x048:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c5ffb +0x04d:  mov    %eax,-0x18(%ebp)
080c5ffe +0x050:  cmpl   $0x0,-0x18(%ebp)
080c6002 +0x054:  jne    080c6152 <+0x1a4>
080c6008 +0x05a:  movl   $"[CServerXml] <event> Tag Error",(%esp)
080c600f +0x061:  call   0807e570 <_init+0xe68>
080c6014 +0x066:  movl   $0xffffffff,(%esp)
080c601b +0x06d:  call   0807e1c0 <_init+0xab8>
080c6020 +0x072:  movl   $0x0,-0x1c(%ebp)
080c6027 +0x079:  movl   $0x0,-0x14(%ebp)
080c602e +0x080:  movl   $0x0,-0x10(%ebp)
080c6035 +0x087:  movl   $0x0,-0xc(%ebp)
080c603c +0x08e:  mov    -0x18(%ebp),%eax
080c603f +0x091:  mov    (%eax),%eax
080c6041 +0x093:  add    $0x2c,%eax
080c6044 +0x096:  mov    (%eax),%edx
080c6046 +0x098:  mov    -0x18(%ebp),%eax
080c6049 +0x09b:  mov    %eax,(%esp)
080c604c +0x09e:  call   *%edx
080c604e +0x0a0:  lea    -0x1c(%ebp),%edx
080c6051 +0x0a3:  mov    %edx,0x8(%esp)
080c6055 +0x0a7:  movl   $"id",0x4(%esp)
080c605d +0x0af:  mov    %eax,(%esp)
080c6060 +0x0b2:  call   087e13d0 <_ZNK12TiXmlElement9AttributeEPKcPi>  ; TiXmlElement::Attribute(char const*, int*) const
080c6065 +0x0b7:  mov    -0x1c(%ebp),%eax
080c6068 +0x0ba:  mov    -0x18(%ebp),%edx
080c606b +0x0bd:  mov    %edx,0x8(%esp)
080c606f +0x0c1:  mov    %eax,0x4(%esp)
080c6073 +0x0c5:  mov    0x8(%ebp),%eax
080c6076 +0x0c8:  mov    %eax,(%esp)
080c6079 +0x0cb:  call   080c6164 <_ZN13np_server_xml10CServerXml8RGBALoadEiP9TiXmlNode>  ; np_server_xml::CServerXml::RGBALoad(int, TiXmlNode*)
080c607e +0x0d0:  mov    0x8(%ebp),%eax
080c6081 +0x0d3:  mov    %eax,0x4(%esp)
080c6085 +0x0d7:  mov    -0x18(%ebp),%eax
080c6088 +0x0da:  mov    %eax,(%esp)
080c608b +0x0dd:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c6090 +0x0e2:  mov    %eax,-0xc(%ebp)
080c6093 +0x0e5:  cmpl   $0x0,-0xc(%ebp)
080c6097 +0x0e9:  jne    080c60b8 <+0x10a>
080c6099 +0x0eb:  mov    0x8(%ebp),%eax
080c609c +0x0ee:  mov    %eax,0x4(%esp)
080c60a0 +0x0f2:  movl   $"%s Tag Error\n",(%esp)
080c60a7 +0x0f9:  call   0807db60 <_init+0x458>
080c60ac +0x0fe:  movl   $0xffffffff,(%esp)
080c60b3 +0x105:  call   0807e1c0 <_init+0xab8>
080c60b8 +0x10a:  mov    -0xc(%ebp),%eax
080c60bb +0x10d:  mov    (%eax),%eax
080c60bd +0x10f:  add    $0x2c,%eax
080c60c0 +0x112:  mov    (%eax),%edx
080c60c2 +0x114:  mov    -0xc(%ebp),%eax
080c60c5 +0x117:  mov    %eax,(%esp)
080c60c8 +0x11a:  call   *%edx
080c60ca +0x11c:  movl   $"start_msg",0x4(%esp)
080c60d2 +0x124:  mov    %eax,(%esp)
080c60d5 +0x127:  call   087e11e0 <_ZNK12TiXmlElement9AttributeEPKc>  ; TiXmlElement::Attribute(char const*) const
080c60da +0x12c:  mov    %eax,-0x10(%ebp)
080c60dd +0x12f:  mov    -0x1c(%ebp),%eax
080c60e0 +0x132:  movl   $0x1,0xc(%esp)
080c60e8 +0x13a:  mov    -0x10(%ebp),%edx
080c60eb +0x13d:  mov    %edx,0x8(%esp)
080c60ef +0x141:  mov    %eax,0x4(%esp)
080c60f3 +0x145:  mov    0x8(%ebp),%eax
080c60f6 +0x148:  mov    %eax,(%esp)
080c60f9 +0x14b:  call   080c6402 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE>  ; np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType)
080c60fe +0x150:  mov    -0xc(%ebp),%eax
080c6101 +0x153:  mov    (%eax),%eax
080c6103 +0x155:  add    $0x2c,%eax
080c6106 +0x158:  mov    (%eax),%edx
080c6108 +0x15a:  mov    -0xc(%ebp),%eax
080c610b +0x15d:  mov    %eax,(%esp)
080c610e +0x160:  call   *%edx
080c6110 +0x162:  movl   $"end_msg",0x4(%esp)
080c6118 +0x16a:  mov    %eax,(%esp)
080c611b +0x16d:  call   087e11e0 <_ZNK12TiXmlElement9AttributeEPKc>  ; TiXmlElement::Attribute(char const*) const
080c6120 +0x172:  mov    %eax,-0x10(%ebp)
080c6123 +0x175:  mov    -0x1c(%ebp),%eax
080c6126 +0x178:  movl   $0x2,0xc(%esp)
080c612e +0x180:  mov    -0x10(%ebp),%edx
080c6131 +0x183:  mov    %edx,0x8(%esp)
080c6135 +0x187:  mov    %eax,0x4(%esp)
080c6139 +0x18b:  mov    0x8(%ebp),%eax
080c613c +0x18e:  mov    %eax,(%esp)
080c613f +0x191:  call   080c6402 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE>  ; np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType)
080c6144 +0x196:  mov    -0x18(%ebp),%eax
080c6147 +0x199:  mov    %eax,(%esp)
080c614a +0x19c:  call   080c6af4 <_GLOBAL__I_g_ServerString_+0x5f>  ; global constructors keyed to g_ServerString_+0x5f
080c614f +0x1a1:  mov    %eax,-0x18(%ebp)
080c6152 +0x1a4:  cmpl   $0x0,-0x18(%ebp)
080c6156 +0x1a8:  setne  %al
080c6159 +0x1ab:  test   %al,%al
080c615b +0x1ad:  jne    080c6020 <+0x72>
080c6161 +0x1b3:  leave
080c6162 +0x1b4:  ret
080c6163 +0x1b5:  nop
```

## 反编译 C

```c
// np_server_xml::CServerXml::EventLoad @ 0x80c5fae

/* np_server_xml::CServerXml::EventLoad(TiXmlNode*) */

void __thiscall np_server_xml::CServerXml::EventLoad(CServerXml *this,TiXmlNode *param_1)

{
  TiXmlElement *pTVar1;
  int local_20;
  TiXmlNode *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  
  local_1c = (TiXmlNode *)0x0;
  local_1c = (TiXmlNode *)TiXmlNode::FirstChild(param_1,"event_str");
  if (local_1c == (TiXmlNode *)0x0) {
    puts("[CServerXml] <event_str> Tag Skip!!");
  }
  else {
    local_1c = (TiXmlNode *)TiXmlNode::FirstChild(local_1c,"event");
    if (local_1c == (TiXmlNode *)0x0) {
      puts("[CServerXml] <event> Tag Error");
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (; local_1c != (TiXmlNode *)0x0; local_1c = (TiXmlNode *)TiXmlNode::NextSibling(local_1c)) {
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = (int *)0x0;
      pTVar1 = (TiXmlElement *)(**(code **)(*(int *)local_1c + 0x2c))(local_1c);
      TiXmlElement::Attribute(pTVar1,"id",&local_20);
      RGBALoad(this,local_20,local_1c);
      local_10 = (int *)TiXmlNode::FirstChild(local_1c,(char *)this);
      if (local_10 == (int *)0x0) {
        printf("%s Tag Error\n",this);
                    /* WARNING: Subroutine does not return */
        exit(-1);
      }
      pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
      local_14 = TiXmlElement::Attribute(pTVar1,"start_msg");
      StrPunish(this,local_20,local_14,1);
      pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
      local_14 = TiXmlElement::Attribute(pTVar1,"end_msg");
      StrPunish(this,local_20,local_14,2);
    }
  }
  return;
}
```
