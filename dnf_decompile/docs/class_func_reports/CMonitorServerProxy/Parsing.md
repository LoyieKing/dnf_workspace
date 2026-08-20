# Parsing

`_ZN19CMonitorServerProxy7ParsingEi`

`CMonitorServerProxy::Parsing(int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x084714ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084714ce  _ZN19CMonitorServerProxy7ParsingEi
#           CMonitorServerProxy::Parsing(int)
# range [0x084714ce, 0x084714eb]
084714ce +0x00:  push   %ebp
084714cf +0x01:  mov    %esp,%ebp
084714d1 +0x03:  sub    $0x18,%esp
084714d4 +0x06:  mov    0x8(%ebp),%eax
084714d7 +0x09:  lea    0xc(%eax),%edx
084714da +0x0c:  mov    0xc(%ebp),%eax
084714dd +0x0f:  mov    %eax,0x4(%esp)
084714e1 +0x13:  mov    %edx,(%esp)
084714e4 +0x16:  call   0846d050 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x323>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x323
084714e9 +0x1b:  leave
084714ea +0x1c:  ret
084714eb +0x1d:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::Parsing @ 0x84714ce

/* CMonitorServerProxy::Parsing(int) */

void __thiscall CMonitorServerProxy::Parsing(CMonitorServerProxy *this,int param_1)

{
  CNetwork<100000,100000>::Parsing_ServerPacket((CNetwork<100000,100000> *)(this + 0xc),param_1);
  return;
}
```
