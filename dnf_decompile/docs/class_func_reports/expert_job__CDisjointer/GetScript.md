# GetScript

`_ZN10expert_job11CDisjointer9GetScriptEv`

`expert_job::CDisjointer::GetScript()`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1e0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1e0a  _ZN10expert_job11CDisjointer9GetScriptEv
#           expert_job::CDisjointer::GetScript()
# range [0x085d1e0a, 0x085d1e39]
085d1e0a +0x00:  push   %ebp
085d1e0b +0x01:  mov    %esp,%ebp
085d1e0d +0x03:  sub    $0x18,%esp
085d1e10 +0x06:  mov    &_ZZN10expert_job11CDisjointer9GetScriptEvE6script,%eax
085d1e15 +0x0b:  test   %eax,%eax
085d1e17 +0x0d:  jne    085d1e33 <+0x29>
085d1e19 +0x0f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d1e1e +0x14:  movl   $0x3,0x4(%esp)
085d1e26 +0x1c:  mov    %eax,(%esp)
085d1e29 +0x1f:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
085d1e2e +0x24:  mov    %eax,&_ZZN10expert_job11CDisjointer9GetScriptEvE6script
085d1e33 +0x29:  mov    &_ZZN10expert_job11CDisjointer9GetScriptEvE6script,%eax
085d1e38 +0x2e:  leave
085d1e39 +0x2f:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::GetScript @ 0x85d1e0a

/* expert_job::CDisjointer::GetScript() */

int expert_job::CDisjointer::GetScript(void)

{
  int iVar1;
  
  if (GetScript()::script == 0) {
    iVar1 = G_CDataManager();
    GetScript()::script = CDataManager::GetExpertJobScript(iVar1);
  }
  return GetScript()::script;
}
```
