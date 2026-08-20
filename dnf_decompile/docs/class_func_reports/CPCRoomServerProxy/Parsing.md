# Parsing

`_ZN18CPCRoomServerProxy7ParsingEi`

`CPCRoomServerProxy::Parsing(int)`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x08471c5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471c5a  _ZN18CPCRoomServerProxy7ParsingEi
#           CPCRoomServerProxy::Parsing(int)
# range [0x08471c5a, 0x08471c73]
08471c5a +0x00:  push   %ebp
08471c5b +0x01:  mov    %esp,%ebp
08471c5d +0x03:  sub    $0x18,%esp
08471c60 +0x06:  mov    0x8(%ebp),%eax
08471c63 +0x09:  mov    0xc(%ebp),%edx
08471c66 +0x0c:  mov    %edx,0x4(%esp)
08471c6a +0x10:  mov    %eax,(%esp)
08471c6d +0x13:  call   0846d050 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x323>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x323
08471c72 +0x18:  leave
08471c73 +0x19:  ret
```

## 反编译 C

```c
// CPCRoomServerProxy::Parsing @ 0x8471c5a

/* CPCRoomServerProxy::Parsing(int) */

void __thiscall CPCRoomServerProxy::Parsing(CPCRoomServerProxy *this,int param_1)

{
  CNetwork<100000,100000>::Parsing_ServerPacket((CNetwork<100000,100000> *)this,param_1);
  return;
}
```
