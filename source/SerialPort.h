//
// Created by leonid on 25.12.2019.
//

#ifndef VIRTUAL_SERIAL_PORT_SERIALPORT_H
#define VIRTUAL_SERIAL_PORT_SERIALPORT_H

#include <filesystem>

namespace vrs {

    class SerialPort {
    public:
        SerialPort() = default;
        explicit SerialPort(std::filesystem::path port_path);

        ~SerialPort() noexcept;

    };

}

#endif //VIRTUAL_SERIAL_PORT_SERIALPORT_H
