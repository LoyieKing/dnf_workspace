# GetEtcScript

`_ZN10expert_job11CDisjointer12GetEtcScriptEv`

`expert_job::CDisjointer::GetEtcScript()`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1e3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1e3a  _ZN10expert_job11CDisjointer12GetEtcScriptEv
#           expert_job::CDisjointer::GetEtcScript()
# range [0x085d1e3a, 0x085d1e61]
085d1e3a +0x00:  push   %ebp
085d1e3b +0x01:  mov    %esp,%ebp
085d1e3d +0x03:  sub    $0x18,%esp
085d1e40 +0x06:  mov    &_ZZN10expert_job11CDisjointer12GetEtcScriptEvE6script,%eax
085d1e45 +0x0b:  test   %eax,%eax
085d1e47 +0x0d:  jne    085d1e5b <+0x21>
085d1e49 +0x0f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d1e4e +0x14:  mov    %eax,(%esp)
085d1e51 +0x17:  call   0849f516 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x347>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x347
085d1e56 +0x1c:  mov    %eax,&_ZZN10expert_job11CDisjointer12GetEtcScriptEvE6script
085d1e5b +0x21:  mov    &_ZZN10expert_job11CDisjointer12GetEtcScriptEvE6script,%eax
085d1e60 +0x26:  leave
085d1e61 +0x27:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::GetEtcScript @ 0x85d1e3a

/* expert_job::CDisjointer::GetEtcScript() */

int expert_job::CDisjointer::GetEtcScript(void)

{
  CDataManager *this;
  
  if (GetEtcScript()::script == 0) {
    this = (CDataManager *)G_CDataManager();
    GetEtcScript()::script = CDataManager::GetExpertJobEtcScript(this);
  }
  return GetEtcScript()::script;
}
```
