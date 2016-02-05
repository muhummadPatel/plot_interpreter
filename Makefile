# Set PLATFORMIO to the platformio executable.
PLATFORMIO = /usr/local/bin/platformio

build:
	@echo "building..."
	$(PLATFORMIO) run

upload:
	@echo "uploading..."
	$(PLATFORMIO) run --target upload

serial_monitor:
	@echo "Starting serial monitor..."
	@echo "(backspace to exit)"
	$(PLATFORMIO) serialports monitor --exit-char 8

clean:
	@echo "cleaning..."
	$(PLATFORMIO) run --target clean
