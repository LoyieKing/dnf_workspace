# RGBALoad

`_ZN13np_server_xml10CServerXml8RGBALoadEiP9TiXmlNode`

`np_server_xml::CServerXml::RGBALoad(int, TiXmlNode*)`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c6164` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c6164  _ZN13np_server_xml10CServerXml8RGBALoadEiP9TiXmlNode
#           np_server_xml::CServerXml::RGBALoad(int, TiXmlNode*)
# range [0x080c6164, 0x080c62b5]
080c6164 +0x000:  push   %ebp
080c6165 +0x001:  mov    %esp,%ebp
080c6167 +0x003:  sub    $0x38,%esp
080c616a +0x006:  movl   $0x0,-0xc(%ebp)
080c6171 +0x00d:  movl   $"color",0x4(%esp)
080c6179 +0x015:  mov    0x10(%ebp),%eax
080c617c +0x018:  mov    %eax,(%esp)
080c617f +0x01b:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c6184 +0x020:  mov    %eax,-0xc(%ebp)
080c6187 +0x023:  cmpl   $0x0,-0xc(%ebp)
080c618b +0x027:  jne    080c61ac <+0x48>
080c618d +0x029:  mov    0x8(%ebp),%eax
080c6190 +0x02c:  mov    %eax,0x4(%esp)
080c6194 +0x030:  movl   $"%s Tag Error\n",(%esp)
080c619b +0x037:  call   0807db60 <_init+0x458>
080c61a0 +0x03c:  movl   $0xffffffff,(%esp)
080c61a7 +0x043:  call   0807e1c0 <_init+0xab8>
080c61ac +0x048:  movl   $0x0,-0x28(%ebp)
080c61b3 +0x04f:  mov    -0xc(%ebp),%eax
080c61b6 +0x052:  mov    (%eax),%eax
080c61b8 +0x054:  add    $0x2c,%eax
080c61bb +0x057:  mov    (%eax),%edx
080c61bd +0x059:  mov    -0xc(%ebp),%eax
080c61c0 +0x05c:  mov    %eax,(%esp)
080c61c3 +0x05f:  call   *%edx
080c61c5 +0x061:  movl   $"red",0x4(%esp)
080c61cd +0x069:  mov    %eax,(%esp)
080c61d0 +0x06c:  call   087e11e0 <_ZNK12TiXmlElement9AttributeEPKc>  ; TiXmlElement::Attribute(char const*) const
080c61d5 +0x071:  mov    %eax,(%esp)
080c61d8 +0x074:  call   0807e6f0 <_init+0xfe8>
080c61dd +0x079:  mov    %al,-0x28(%ebp)
080c61e0 +0x07c:  mov    -0xc(%ebp),%eax
080c61e3 +0x07f:  mov    (%eax),%eax
080c61e5 +0x081:  add    $0x2c,%eax
080c61e8 +0x084:  mov    (%eax),%edx
080c61ea +0x086:  mov    -0xc(%ebp),%eax
080c61ed +0x089:  mov    %eax,(%esp)
080c61f0 +0x08c:  call   *%edx
080c61f2 +0x08e:  movl   $"green",0x4(%esp)
080c61fa +0x096:  mov    %eax,(%esp)
080c61fd +0x099:  call   087e11e0 <_ZNK12TiXmlElement9AttributeEPKc>  ; TiXmlElement::Attribute(char const*) const
080c6202 +0x09e:  mov    %eax,(%esp)
080c6205 +0x0a1:  call   0807e6f0 <_init+0xfe8>
080c620a +0x0a6:  mov    %al,-0x27(%ebp)
080c620d +0x0a9:  mov    -0xc(%ebp),%eax
080c6210 +0x0ac:  mov    (%eax),%eax
080c6212 +0x0ae:  add    $0x2c,%eax
080c6215 +0x0b1:  mov    (%eax),%edx
080c6217 +0x0b3:  mov    -0xc(%ebp),%eax
080c621a +0x0b6:  mov    %eax,(%esp)
080c621d +0x0b9:  call   *%edx
080c621f +0x0bb:  movl   $"blue",0x4(%esp)
080c6227 +0x0c3:  mov    %eax,(%esp)
080c622a +0x0c6:  call   087e11e0 <_ZNK12TiXmlElement9AttributeEPKc>  ; TiXmlElement::Attribute(char const*) const
080c622f +0x0cb:  mov    %eax,(%esp)
080c6232 +0x0ce:  call   0807e6f0 <_init+0xfe8>
080c6237 +0x0d3:  mov    %al,-0x26(%ebp)
080c623a +0x0d6:  mov    -0xc(%ebp),%eax
080c623d +0x0d9:  mov    (%eax),%eax
080c623f +0x0db:  add    $0x2c,%eax
080c6242 +0x0de:  mov    (%eax),%edx
080c6244 +0x0e0:  mov    -0xc(%ebp),%eax
080c6247 +0x0e3:  mov    %eax,(%esp)
080c624a +0x0e6:  call   *%edx
080c624c +0x0e8:  movl   $"alpha",0x4(%esp)
080c6254 +0x0f0:  mov    %eax,(%esp)
080c6257 +0x0f3:  call   087e11e0 <_ZNK12TiXmlElement9AttributeEPKc>  ; TiXmlElement::Attribute(char const*) const
080c625c +0x0f8:  mov    %eax,(%esp)
080c625f +0x0fb:  call   0807e6f0 <_init+0xfe8>
080c6264 +0x100:  mov    %al,-0x25(%ebp)
080c6267 +0x103:  lea    -0x28(%ebp),%eax
080c626a +0x106:  mov    %eax,0x8(%esp)
080c626e +0x10a:  lea    0xc(%ebp),%eax
080c6271 +0x10d:  mov    %eax,0x4(%esp)
080c6275 +0x111:  lea    -0x14(%ebp),%eax
080c6278 +0x114:  mov    %eax,(%esp)
080c627b +0x117:  call   080c6cf2 <_GLOBAL__I_g_ServerString_+0x25d>  ; global constructors keyed to g_ServerString_+0x25d
080c6280 +0x11c:  lea    -0x14(%ebp),%eax
080c6283 +0x11f:  mov    %eax,0x4(%esp)
080c6287 +0x123:  lea    -0x1c(%ebp),%eax
080c628a +0x126:  mov    %eax,(%esp)
080c628d +0x129:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
080c6292 +0x12e:  mov    0x8(%ebp),%eax
080c6295 +0x131:  lea    0xa0(%eax),%ecx
080c629b +0x137:  lea    -0x24(%ebp),%eax
080c629e +0x13a:  lea    -0x1c(%ebp),%edx
080c62a1 +0x13d:  mov    %edx,0x8(%esp)
080c62a5 +0x141:  mov    %ecx,0x4(%esp)
080c62a9 +0x145:  mov    %eax,(%esp)
080c62ac +0x148:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
080c62b1 +0x14d:  sub    $0x4,%esp
080c62b4 +0x150:  leave
080c62b5 +0x151:  ret
```

## 反编译 C

```c
// np_server_xml::CServerXml::RGBALoad @ 0x80c6164

/* np_server_xml::CServerXml::RGBALoad(int, TiXmlNode*) */

void __thiscall np_server_xml::CServerXml::RGBALoad(CServerXml *this,int param_1,TiXmlNode *param_2)

{
  TiXmlElement *pTVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_2c;
  pair local_28 [8];
  pair<int_const,int> local_20 [8];
  pair<int,int> local_18 [8];
  int *local_10;
  
  local_10 = (int *)0x0;
  local_10 = (int *)TiXmlNode::FirstChild(param_2,"color");
  if (local_10 == (int *)0x0) {
    printf("%s Tag Error\n",this);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_2c = 0;
  pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
  pcVar2 = (char *)TiXmlElement::Attribute(pTVar1,"red");
  iVar3 = atoi(pcVar2);
  local_2c = CONCAT31(local_2c._1_3_,(char)iVar3);
  pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
  pcVar2 = (char *)TiXmlElement::Attribute(pTVar1,"green");
  iVar3 = atoi(pcVar2);
  local_2c._0_2_ = CONCAT11((char)iVar3,(undefined1)local_2c);
  pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
  pcVar2 = (char *)TiXmlElement::Attribute(pTVar1,"blue");
  iVar3 = atoi(pcVar2);
  local_2c._0_3_ = CONCAT12((char)iVar3,(undefined2)local_2c);
  pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
  pcVar2 = (char *)TiXmlElement::Attribute(pTVar1,"alpha");
  iVar3 = atoi(pcVar2);
  local_2c = CONCAT13((char)iVar3,(undefined3)local_2c);
  std::pair<int,int>::pair<int&,int&>(local_18,&param_1,&local_2c);
  std::pair<int_const,int>::pair<int,int>(local_20,local_18);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_28);
  return;
}
```
