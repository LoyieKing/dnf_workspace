# DoSaveLog

`_ZN8WongWork15CLogGameChannel9DoSaveLogEP23SIG_SAVE_LOGGAMECHANNEL`

`WongWork::CLogGameChannel::DoSaveLog(SIG_SAVE_LOGGAMECHANNEL*)`

| 类 | 地址 |
|---|---|
| `WongWork::CLogGameChannel` | `0x08550612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550612  _ZN8WongWork15CLogGameChannel9DoSaveLogEP23SIG_SAVE_LOGGAMECHANNEL
#           WongWork::CLogGameChannel::DoSaveLog(SIG_SAVE_LOGGAMECHANNEL*)
# range [0x08550612, 0x085506c5]
08550612 +0x00:  push   %ebp
08550613 +0x01:  mov    %esp,%ebp
08550615 +0x03:  push   %edi
08550616 +0x04:  push   %esi
08550617 +0x05:  push   %ebx
08550618 +0x06:  sub    $0x5c,%esp
0855061b +0x09:  mov    0x8(%ebp),%eax
0855061e +0x0c:  mov    %eax,(%esp)
08550621 +0x0f:  call   085503c4 <_ZN8WongWork15CLogGameChannel14GetLogTargetDBEv>  ; WongWork::CLogGameChannel::GetLogTargetDB()
08550626 +0x14:  mov    %eax,-0x1c(%ebp)
08550629 +0x17:  mov    0xc(%ebp),%eax
0855062c +0x1a:  movzwl 0x39(%eax),%eax
08550630 +0x1e:  movswl %ax,%ecx
08550633 +0x21:  mov    0xc(%ebp),%eax
08550636 +0x24:  movzwl 0x35(%eax),%eax
0855063a +0x28:  movswl %ax,%edi
0855063d +0x2b:  mov    0xc(%ebp),%eax
08550640 +0x2e:  movzwl 0x37(%eax),%eax
08550644 +0x32:  movswl %ax,%esi
08550647 +0x35:  mov    0xc(%ebp),%eax
0855064a +0x38:  add    $0x25,%eax
0855064d +0x3b:  mov    %eax,-0x30(%ebp)
08550650 +0x3e:  mov    0xc(%ebp),%eax
08550653 +0x41:  movzwl 0x23(%eax),%eax
08550657 +0x45:  movswl %ax,%ebx
0855065a +0x48:  mov    0xc(%ebp),%eax
0855065d +0x4b:  add    $0x5,%eax
08550660 +0x4e:  mov    %eax,-0x2c(%ebp)
08550663 +0x51:  mov    0xc(%ebp),%eax
08550666 +0x54:  mov    0x1(%eax),%edx
08550669 +0x57:  mov    0xc(%ebp),%eax
0855066c +0x5a:  movzbl (%eax),%eax
0855066f +0x5d:  movsbl %al,%eax
08550672 +0x60:  mov    %ecx,0x24(%esp)
08550676 +0x64:  mov    %edi,0x20(%esp)
0855067a +0x68:  mov    %esi,0x1c(%esp)
0855067e +0x6c:  mov    -0x30(%ebp),%ecx
08550681 +0x6f:  mov    %ecx,0x18(%esp)
08550685 +0x73:  mov    %ebx,0x14(%esp)
08550689 +0x77:  mov    -0x2c(%ebp),%ecx
0855068c +0x7a:  mov    %ecx,0x10(%esp)
08550690 +0x7e:  mov    %edx,0xc(%esp)
08550694 +0x82:  mov    %eax,0x8(%esp)
08550698 +0x86:  movl   $"inSert into log_game_channel(gc_up_time,gc_game,gc_no,gc_channel,gc_ch_group,gc_ip,gc_now,gc_new,gc_out) values(now(),%d,%d,'%s',%d,'%s',%d,%d,%d)",0x4(%esp)
085506a0 +0x8e:  mov    -0x1c(%ebp),%eax
085506a3 +0x91:  mov    %eax,(%esp)
085506a6 +0x94:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
085506ab +0x99:  movl   $0x1,0x4(%esp)
085506b3 +0xa1:  mov    -0x1c(%ebp),%eax
085506b6 +0xa4:  mov    %eax,(%esp)
085506b9 +0xa7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
085506be +0xac:  add    $0x5c,%esp
085506c1 +0xaf:  pop    %ebx
085506c2 +0xb0:  pop    %esi
085506c3 +0xb1:  pop    %edi
085506c4 +0xb2:  pop    %ebp
085506c5 +0xb3:  ret
```

## 反编译 C

```c
// WongWork::CLogGameChannel::DoSaveLog @ 0x8550612

/* WongWork::CLogGameChannel::DoSaveLog(SIG_SAVE_LOGGAMECHANNEL*) */

void __thiscall
WongWork::CLogGameChannel::DoSaveLog(CLogGameChannel *this,SIG_SAVE_LOGGAMECHANNEL *param_1)

{
  MySQL *this_00;
  
  this_00 = (MySQL *)GetLogTargetDB();
  MySQL::set_query(this_00,
                   "inSert into log_game_channel(gc_up_time,gc_game,gc_no,gc_channel,gc_ch_group,gc_ip,gc_now,gc_new,gc_out) values(now(),%d,%d,\'%s\',%d,\'%s\',%d,%d,%d)"
                   ,(int)(char)*param_1,*(undefined4 *)(param_1 + 1),param_1 + 5,
                   (int)*(short *)(param_1 + 0x23),param_1 + 0x25,(int)*(short *)(param_1 + 0x37),
                   (int)*(short *)(param_1 + 0x35),(int)*(short *)(param_1 + 0x39));
  MySQL::exec(this_00,true);
  return;
}
```
