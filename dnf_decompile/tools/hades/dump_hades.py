# Ghidra headless script: dump all Hades-related functions' decompiled C.
# Usage:
#   analyzeHeadless <project> dnf_project -process df_game_r -noanalysis \
#       -postScript dump_hades.py
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

# (address, label) - full Hades symbol inventory from objdump -t
TARGETS = [
    (0x8697bc6, "XNuclear::CHades::CHades"),
    (0x8694f54, "XNuclear::CHades::~CHades"),
    (0x84b91e8, "XNuclear::CHades::Init(CUser*)"),
    (0x84b9200, "XNuclear::CHades::Send_Login()"),
    (0x84b92ea, "XNuclear::CHades::Send_Logout()"),
    (0x84b9322, "XNuclear::CHades::Send_HackType()"),
    (0x84b9328, "XNuclear::CHades::AddHackTypeCnt(m,m,m,m)"),
    (0x84b9386, "XNuclear::CHades::Send_ReturnToVillage()"),
    (0x84b938c, "XNuclear::CHades::StdCateUpdate(t,t)"),
    (0x84b93ee, "XNuclear::CHades::Send_ChangeGold()"),
    (0x84b93f4, "XNuclear::CHades::Send_ChangeSecurity(ENUM_HADES_SECURITY)"),
    (0x84b93fa, "XNuclear::CHades::GoldPlus(j,ENUM_GOLD_CONTROL_REASON)"),
    (0x84b944a, "XNuclear::CHades::GoldMinus(j,ENUM_GOLD_CONTROL_REASON)"),
    (0x84b949a, "XNuclear::CHades::GoldTracking(h,j,Pc,j,j)"),
    (0x84b953e, "XNuclear::CHades::ExpUp(j)"),
    (0x84b9552, "XNuclear::CHades::UseFatigue(j)"),
    (0x84b95a8, "XNuclear::CHades::ChangeSecurity(ENUM_HADES_SECURITY,j)"),
    (0x84b95bc, "XNuclear::CHades::RunHadesAction(j,j,j,j,Pc)"),
    (0x84b9718, "XNuclear::CHades::needLogin()"),
    (0x84b9774, "XNuclear::CHades::GetIP(Pc)"),
    (0x84b97fe, "XNuclear::CHades::Send_UserStatus()"),
    (0x8470510, "CHadesServerProxy::CHadesServerProxy(Pc,i,i)"),
    (0x847059a, "CHadesServerProxy::HadesSvrInit()"),
    (0x84705be, "CHadesServerProxy::ConnTcpHadesSvr()"),
    (0x84705fe, "CHadesServerProxy::IsConnect()"),
    (0x8470628, "CHadesServerProxy::InitUdp()"),
    (0x8470682, "CHadesServerProxy::SendHeartBeatPacket(t,i)"),
    (0x84706be, "CHadesServerProxy::SendHadesUdpPacket(Pc)"),
    (0x8470752, "CHadesServerProxy::SendHadesTcpPacket(Pc)"),
    (0x8470794, "CHadesServerProxy::Parsing(i)"),
    (0x84707b6, "CHadesServerProxy::OnDisconnect()"),
    (0x84707ca, "CHadesServerProxy::RunConnTimer()"),
    (0x84b9ab2, "CHadesServerProxy::GetHadesSocketConnSec()"),
    (0x863cfa6, "Timer_HadesHeartBeat::Timer_HadesHeartBeat()"),
    (0x863a760, "Timer_HadesHeartBeat::dispatch_sig(i,i,j)"),
    (0x863a7c2, "Timer_HadesHeartBeat::registNextTimer()"),
    (0x84eeca8, "Inter_HadesAction::Inter_HadesAction()"),
    (0x84e5e62, "Inter_HadesAction::send_alert(CUser*,j)"),
    (0x84e5f02, "Inter_HadesAction::dispatch_sig(CUser*,Pc,i)"),
    (0x84eeacc, "Inter_HadesDisConnect::Inter_HadesDisConnect()"),
    (0x84e4342, "Inter_HadesDisConnect::dispatch_sig(CUser*,Pc,i)"),
    (0x844fab2, "DB_HadesPunish::DB_HadesPunish()"),
    (0x8445dd4, "DB_HadesPunish::makeRequest(j,j,j,j,j,Pc)"),
    (0x8445aa6, "DB_HadesPunish::dispatch(i,i,Stream*)"),
    (0x8454232, "Stream::GetOutBuffer<SIG_HADES_PUNISH>"),
    (0x8454286, "CStreamGuard::GetInBuffer<SIG_HADES_PUNISH>"),
    (0x8457d48, "Stream::GetInBuffer<SIG_HADES_PUNISH>"),
    (0x8685418, "cUserHistoryLog::HadesHistoryLog(j,j,j,j)"),
    (0x82a6e04, "CEnvironment::get_udp_ip_hades()"),
    (0x82a6e12, "CEnvironment::get_udp_port_hades()"),
    (0x82a6e20, "CEnvironment::get_tcp_port_hades()"),
    (0x84b9946, "Packet_Hades_Login ctor"),
    (0x84b996a, "Packet_Hades_Logout ctor"),
    (0x84b998e, "Packet_Hades_AddHackType ctor"),
    (0x84b99b2, "Packet_Hades_Gold_Plus ctor"),
    (0x84b99d6, "Packet_Hades_Gold_Minus ctor"),
    (0x84b99fa, "Packet_Hades_GoldTracking ctor"),
    (0x84b9a1e, "Packet_Hades_UserStatus ctor"),
    (0x84b9a42, "Packet_Hades_StdUpdate ctor"),
    (0x84708e4, "Packet_Hades_Udp_HeartBeat ctor"),
]

OUT = "/tmp/hades_decomp_all.txt"

def main():
    try:
        fm = currentProgram.getFunctionManager()
        space = currentProgram.getAddressFactory().getDefaultAddressSpace()
        decomp = DecompInterface()
        decomp.openProgram(currentProgram)
        monitor = ConsoleTaskMonitor()
        n = 0
        with open(OUT, "w") as fout:
            for addr, label in TARGETS:
                func = fm.getFunctionAt(space.getAddress(addr))
                fout.write("\n\n// ================= %s @ 0x%x =================\n" % (label, addr))
                if func is None:
                    fout.write("// (no function at this address)\n")
                    continue
                res = decomp.decompileFunction(func, 120, monitor)
                if res and res.decompileCompleted():
                    fout.write(res.getDecompiledFunction().getC())
                    n += 1
                else:
                    fout.write("// decompile failed\n")
        decomp.dispose()
        print("DUMP_HADES_OK: decompiled %d functions -> %s" % (n, OUT))
    except Exception as e:
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    main()
