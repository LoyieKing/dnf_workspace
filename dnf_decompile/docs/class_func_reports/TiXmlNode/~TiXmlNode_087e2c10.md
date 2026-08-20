# ~TiXmlNode

`_ZN9TiXmlNodeD0Ev`

`TiXmlNode::~TiXmlNode()`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e2c10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2c10  _ZN9TiXmlNodeD0Ev
#           TiXmlNode::~TiXmlNode()
# range [0x087e2c10, 0x087e2c2f]
087e2c10 +0x00:  push   %ebp
087e2c11 +0x01:  mov    %esp,%ebp
087e2c13 +0x03:  push   %ebx
087e2c14 +0x04:  sub    $0x14,%esp
087e2c17 +0x07:  mov    0x8(%ebp),%ebx
087e2c1a +0x0a:  mov    %ebx,(%esp)
087e2c1d +0x0d:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e2c22 +0x12:  mov    %ebx,0x8(%ebp)
087e2c25 +0x15:  add    $0x14,%esp
087e2c28 +0x18:  pop    %ebx
087e2c29 +0x19:  pop    %ebp
087e2c2a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087e2c2f +0x1f:  nop
```

## 反编译 C

```c
// TiXmlNode::~TiXmlNode @ 0x87e2c10

/* TiXmlNode::~TiXmlNode() */

void __thiscall TiXmlNode::~TiXmlNode(TiXmlNode *this)

{
  ~TiXmlNode(this);
  operator_delete(this);
  return;
}
```
