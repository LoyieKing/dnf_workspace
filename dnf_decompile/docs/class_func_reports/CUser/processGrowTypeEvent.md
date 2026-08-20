# processGrowTypeEvent

`_ZN5CUser20processGrowTypeEventEhh21eChangeGrowTypeReason`

`CUser::processGrowTypeEvent(unsigned char, unsigned char, eChangeGrowTypeReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867925a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867925a  _ZN5CUser20processGrowTypeEventEhh21eChangeGrowTypeReason
#           CUser::processGrowTypeEvent(unsigned char, unsigned char, eChangeGrowTypeReason)
# range [0x0867925a, 0x086792d5]
0867925a +0x00:  push   %ebp
0867925b +0x01:  mov    %esp,%ebp
0867925d +0x03:  sub    $0x28,%esp
08679260 +0x06:  mov    0xc(%ebp),%edx
08679263 +0x09:  mov    0x10(%ebp),%eax
08679266 +0x0c:  mov    %dl,-0xc(%ebp)
08679269 +0x0f:  mov    %al,-0x10(%ebp)
0867926c +0x12:  cmpl   $0x1,0x14(%ebp)
08679270 +0x16:  je     086792d3 <+0x79>
08679272 +0x18:  movzbl -0x10(%ebp),%edx
08679276 +0x1c:  movzbl -0xc(%ebp),%eax
0867927a +0x20:  mov    0x14(%ebp),%ecx
0867927d +0x23:  mov    %ecx,0xc(%esp)
08679281 +0x27:  mov    %edx,0x8(%esp)
08679285 +0x2b:  mov    %eax,0x4(%esp)
08679289 +0x2f:  mov    0x8(%ebp),%eax
0867928c +0x32:  mov    %eax,(%esp)
0867928f +0x35:  call   08664080 <_ZN5CUser17_onChangeGrowTypeEhh21eChangeGrowTypeReason>  ; CUser::_onChangeGrowType(unsigned char, unsigned char, eChangeGrowTypeReason)
08679294 +0x3a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08679299 +0x3f:  mov    %eax,(%esp)
0867929c +0x42:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
086792a1 +0x47:  movl   $0x1,0x8(%esp)
086792a9 +0x4f:  mov    0x8(%ebp),%edx
086792ac +0x52:  mov    %edx,0x4(%esp)
086792b0 +0x56:  mov    %eax,(%esp)
086792b3 +0x59:  call   0810bf56 <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb>  ; EventClassify::CEventScriptMng::process_level_up_reward(CUser*, bool)
086792b8 +0x5e:  cmpb   $0x0,-0x10(%ebp)
086792bc +0x62:  jne    086792d4 <+0x7a>
086792be +0x64:  movl   $0x1,0x4(%esp)
086792c6 +0x6c:  mov    0x8(%ebp),%eax
086792c9 +0x6f:  mov    %eax,(%esp)
086792cc +0x72:  call   08663cc0 <_ZN5CUser25processLevelUpEventRewardEb>  ; CUser::processLevelUpEventReward(bool)
086792d1 +0x77:  jmp    086792d4 <+0x7a>
086792d3 +0x79:  nop
086792d4 +0x7a:  leave
086792d5 +0x7b:  ret
```

## 反编译 C

```c
// CUser::processGrowTypeEvent @ 0x867925a

/* CUser::processGrowTypeEvent(unsigned char, unsigned char, eChangeGrowTypeReason) */

void __thiscall CUser::processGrowTypeEvent(CUser *this,undefined1 param_1,char param_2,int param_4)

{
  CDataManager *this_00;
  CEventScriptMng *this_01;
  
  if (param_4 != 1) {
    _onChangeGrowType(this,param_1,param_2,param_4);
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
    EventClassify::CEventScriptMng::process_level_up_reward(this_01,this,true);
    if (param_2 == '\0') {
      processLevelUpEventReward(this,true);
    }
  }
  return;
}
```
