# ProcessLoad

`_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode`

`np_server_xml::CServerXml::ProcessLoad(TiXmlNode*)`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c62b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c62b6  _ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode
#           np_server_xml::CServerXml::ProcessLoad(TiXmlNode*)
# range [0x080c62b6, 0x080c6401]
080c62b6 +0x000:  push   %ebp
080c62b7 +0x001:  mov    %esp,%ebp
080c62b9 +0x003:  sub    $0x38,%esp
080c62bc +0x006:  movl   $0x0,-0x18(%ebp)
080c62c3 +0x00d:  movl   $"str",0x4(%esp)
080c62cb +0x015:  mov    0xc(%ebp),%eax
080c62ce +0x018:  mov    %eax,(%esp)
080c62d1 +0x01b:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c62d6 +0x020:  mov    %eax,-0x18(%ebp)
080c62d9 +0x023:  cmpl   $0x0,-0x18(%ebp)
080c62dd +0x027:  jne    080c62f0 <+0x3a>
080c62df +0x029:  movl   $"[CServerXml] <str> Tag Skip!!",(%esp)
080c62e6 +0x030:  call   0807e570 <_init+0xe68>
080c62eb +0x035:  jmp    080c6400 <+0x14a>
080c62f0 +0x03a:  movl   $"string",0x4(%esp)
080c62f8 +0x042:  mov    -0x18(%ebp),%eax
080c62fb +0x045:  mov    %eax,(%esp)
080c62fe +0x048:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c6303 +0x04d:  mov    %eax,-0x18(%ebp)
080c6306 +0x050:  cmpl   $0x0,-0x18(%ebp)
080c630a +0x054:  jne    080c63f1 <+0x13b>
080c6310 +0x05a:  movl   $"[CServerXml] <string> Tag Error",(%esp)
080c6317 +0x061:  call   0807e570 <_init+0xe68>
080c631c +0x066:  movl   $0xffffffff,(%esp)
080c6323 +0x06d:  call   0807e1c0 <_init+0xab8>
080c6328 +0x072:  movl   $0x0,-0x1c(%ebp)
080c632f +0x079:  movl   $0x0,-0x14(%ebp)
080c6336 +0x080:  movl   $0x0,-0x10(%ebp)
080c633d +0x087:  movl   $0x0,-0xc(%ebp)
080c6344 +0x08e:  mov    -0x18(%ebp),%eax
080c6347 +0x091:  mov    (%eax),%eax
080c6349 +0x093:  add    $0x2c,%eax
080c634c +0x096:  mov    (%eax),%edx
080c634e +0x098:  mov    -0x18(%ebp),%eax
080c6351 +0x09b:  mov    %eax,(%esp)
080c6354 +0x09e:  call   *%edx
080c6356 +0x0a0:  lea    -0x1c(%ebp),%edx
080c6359 +0x0a3:  mov    %edx,0x8(%esp)
080c635d +0x0a7:  movl   $"id",0x4(%esp)
080c6365 +0x0af:  mov    %eax,(%esp)
080c6368 +0x0b2:  call   087e13d0 <_ZNK12TiXmlElement9AttributeEPKcPi>  ; TiXmlElement::Attribute(char const*, int*) const
080c636d +0x0b7:  mov    0x8(%ebp),%eax
080c6370 +0x0ba:  mov    %eax,0x4(%esp)
080c6374 +0x0be:  mov    -0x18(%ebp),%eax
080c6377 +0x0c1:  mov    %eax,(%esp)
080c637a +0x0c4:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c637f +0x0c9:  mov    %eax,-0xc(%ebp)
080c6382 +0x0cc:  cmpl   $0x0,-0xc(%ebp)
080c6386 +0x0d0:  jne    080c639d <+0xe7>
080c6388 +0x0d2:  mov    0x8(%ebp),%eax
080c638b +0x0d5:  mov    %eax,0x4(%esp)
080c638f +0x0d9:  movl   $"%s Tag Error\n",(%esp)
080c6396 +0x0e0:  call   0807db60 <_init+0x458>
080c639b +0x0e5:  jmp    080c6400 <+0x14a>
080c639d +0x0e7:  mov    -0xc(%ebp),%eax
080c63a0 +0x0ea:  mov    (%eax),%eax
080c63a2 +0x0ec:  add    $0x2c,%eax
080c63a5 +0x0ef:  mov    (%eax),%edx
080c63a7 +0x0f1:  mov    -0xc(%ebp),%eax
080c63aa +0x0f4:  mov    %eax,(%esp)
080c63ad +0x0f7:  call   *%edx
080c63af +0x0f9:  movl   $"text",0x4(%esp)
080c63b7 +0x101:  mov    %eax,(%esp)
080c63ba +0x104:  call   087e11e0 <_ZNK12TiXmlElement9AttributeEPKc>  ; TiXmlElement::Attribute(char const*) const
080c63bf +0x109:  mov    %eax,-0x10(%ebp)
080c63c2 +0x10c:  mov    -0x1c(%ebp),%eax
080c63c5 +0x10f:  movl   $0x0,0xc(%esp)
080c63cd +0x117:  mov    -0x10(%ebp),%edx
080c63d0 +0x11a:  mov    %edx,0x8(%esp)
080c63d4 +0x11e:  mov    %eax,0x4(%esp)
080c63d8 +0x122:  mov    0x8(%ebp),%eax
080c63db +0x125:  mov    %eax,(%esp)
080c63de +0x128:  call   080c6402 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE>  ; np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType)
080c63e3 +0x12d:  mov    -0x18(%ebp),%eax
080c63e6 +0x130:  mov    %eax,(%esp)
080c63e9 +0x133:  call   080c6af4 <_GLOBAL__I_g_ServerString_+0x5f>  ; global constructors keyed to g_ServerString_+0x5f
080c63ee +0x138:  mov    %eax,-0x18(%ebp)
080c63f1 +0x13b:  cmpl   $0x0,-0x18(%ebp)
080c63f5 +0x13f:  setne  %al
080c63f8 +0x142:  test   %al,%al
080c63fa +0x144:  jne    080c6328 <+0x72>
080c6400 +0x14a:  leave
080c6401 +0x14b:  ret
```

## 反编译 C

```c
// np_server_xml::CServerXml::ProcessLoad @ 0x80c62b6

/* np_server_xml::CServerXml::ProcessLoad(TiXmlNode*) */

void __thiscall np_server_xml::CServerXml::ProcessLoad(CServerXml *this,TiXmlNode *param_1)

{
  TiXmlElement *pTVar1;
  int local_20;
  TiXmlNode *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  
  local_1c = (TiXmlNode *)0x0;
  local_1c = (TiXmlNode *)TiXmlNode::FirstChild(param_1,"str");
  if (local_1c == (TiXmlNode *)0x0) {
    puts("[CServerXml] <str> Tag Skip!!");
  }
  else {
    local_1c = (TiXmlNode *)TiXmlNode::FirstChild(local_1c,"string");
    if (local_1c == (TiXmlNode *)0x0) {
      puts("[CServerXml] <string> Tag Error");
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
      local_10 = (int *)TiXmlNode::FirstChild(local_1c,(char *)this);
      if (local_10 == (int *)0x0) {
        printf("%s Tag Error\n",this);
        return;
      }
      pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
      local_14 = TiXmlElement::Attribute(pTVar1,"text");
      StrPunish(this,local_20,local_14,0);
    }
  }
  return;
}
```
